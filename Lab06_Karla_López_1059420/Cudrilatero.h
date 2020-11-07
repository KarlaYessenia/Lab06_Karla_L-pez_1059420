#pragma once
#include "Figuras_Geometricas.h"
class Cuadrilatero :
    public Figuras_Geometricas
{
public:
    Cuadrilatero() {};
    ~Cuadrilatero() {};
    double GetArea() override;
    double GetPerimeter() override;
};

