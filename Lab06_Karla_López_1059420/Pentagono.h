#pragma once
#include "Figuras_Geometricas.h"
class Pentagono :
    public Figuras_Geometricas
{
public:
    Pentagono() {};
    ~Pentagono() {};
    double GetArea() override;
    double GetPerimeter() override;
};

