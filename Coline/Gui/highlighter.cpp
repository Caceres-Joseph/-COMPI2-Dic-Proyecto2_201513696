

#include "highlighter.h"

Highlighter::Highlighter(QTextDocument *parent)
    : QSyntaxHighlighter(parent)
{
    HighlightingRule rule;

    keywordFormat.setForeground(Qt::darkBlue);
    keywordFormat.setFontWeight(QFont::Bold);
    QStringList keywordPatterns;

    keywordPatterns << "(?i)\\bimportar\\b" << "(?i)\\bclase\\b" << "(?i)\\bextender\\b"
                    << "(?i)\\bpadre\\b" << "(?i)\\bprincipal" << "(?i)\\bsobrescribir\\b"
                    << "(?i)\\bnuevo\\b" << "(?i)\\beste\\b" << "(?i)\\bimprimir\\b"
                    << "(?i)\\bconcatenar\\b" << "(?i)\\bnamespace\\b" << "(?i)\\boperator\\b"
                    << "(?i)\\bprivado\\b" << "(?i)\\bconvertiracadena\\b" << "(?i)\\bretornar\\b"
                    << "(?i)\\bsi\\b" << "(?i)\\bsino\\b" << "(?i)\\bcaso\\b"
                    << "(?i)\\bde\\b" << "(?i)\\bdefecto\\b" << "(?i)\\bmientras\\b"
                    << "(?i)\\bcontinuar\\b" << "(?i)\\bpara\\b" << "(?i)\\bhacer\\b"
                    << "(?i)\\brepetir\\b" << "(?i)\\bhasta\\b" << "(?i)\\bsuper\\b"
                    << "(?i)\\bnada\\b" << "(?i)\\bvacio\\b" << "(?i)\\bnulo\\b"
                    << "(?i)\\bentero\\b" << "(?i)\\bcaracter\\b" << "(?i)\\bdecimal\\b"
                    << "(?i)\\bbooleano\\b" << "(?i)\\bpublico\\b" << "(?i)\\bprivado\\b"
                    << "(?i)\\bprotegido\\b"

                       ;
    foreach (const QString &pattern, keywordPatterns) {
        rule.pattern = QRegularExpression(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }

    classFormat.setFontWeight(QFont::Bold);
    classFormat.setForeground(Qt::darkMagenta);
    rule.pattern = QRegularExpression("\\bQ[A-Za-z]+\\b");
    rule.format = classFormat;
    highlightingRules.append(rule);

    singleLineCommentFormat.setForeground(Qt::gray);
    rule.pattern = QRegularExpression("//[^\n]*");
    rule.format = singleLineCommentFormat;
    highlightingRules.append(rule);

    multiLineCommentFormat.setForeground(Qt::gray);

    quotationFormat.setForeground(Qt::darkRed);
    rule.pattern = QRegularExpression("\".*\"");
    rule.format = quotationFormat;
    highlightingRules.append(rule);

    functionFormat.setFontItalic(true);
    functionFormat.setForeground(Qt::blue);
    rule.pattern = QRegularExpression("\\b[A-Za-z0-9_]+(?=\\()");
    rule.format = functionFormat;
    highlightingRules.append(rule);

    commentStartExpression = QRegularExpression("/\\*");
    commentEndExpression = QRegularExpression("\\*/");
}

void Highlighter::highlightBlock(const QString &text)
{
    foreach (const HighlightingRule &rule, highlightingRules) {
        QRegularExpressionMatchIterator matchIterator = rule.pattern.globalMatch(text);
        while (matchIterator.hasNext()) {
            QRegularExpressionMatch match = matchIterator.next();
            setFormat(match.capturedStart(), match.capturedLength(), rule.format);
        }
    }
    setCurrentBlockState(0);

    int startIndex = 0;
    if (previousBlockState() != 1)
        startIndex = text.indexOf(commentStartExpression);

    while (startIndex >= 0) {
        QRegularExpressionMatch match = commentEndExpression.match(text, startIndex);
        int endIndex = match.capturedStart();
        int commentLength = 0;
        if (endIndex == -1) {
            setCurrentBlockState(1);
            commentLength = text.length() - startIndex;
        } else {
            commentLength = endIndex - startIndex
                            + match.capturedLength();
        }
        setFormat(startIndex, commentLength, multiLineCommentFormat);
        startIndex = text.indexOf(commentStartExpression, startIndex + commentLength);
    }
}
