#pragma once
#include "Figuras_Geometricas.h"
class Triangulo :
    public Figuras_Geometricas
{
public:
    Triangulo() {};
    ~Triangulo() {};
    double GetArea() override;
    double GetPerimeter() override;
};
