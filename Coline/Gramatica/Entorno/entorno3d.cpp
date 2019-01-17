#include "entorno3d.h"

Entorno3D::Entorno3D()
{
    this->Stack = new memoria();
    this->Pool = new memoria();
    this->Heap = new memoria();
    this->metodos.clear();
    this->IP = 0;
}
