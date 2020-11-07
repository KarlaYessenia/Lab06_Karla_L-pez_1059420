#include "Cudrilatero.h"
double Cuadrilatero::GetArea() 
{
	return System::Math::Pow(width, 2);
}

double Cuadrilatero::GetPerimeter() {
	return width*4;
}
