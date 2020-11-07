#include "Triangulo.h"
double Triangulo::GetArea() {
	return (height * width)/ 2;
}

double Triangulo::GetPerimeter() {
	return (System::Math::Sqrt((System::Math::Pow(height, 2)) + (System::Math::Pow(width, 2))))+height+width;
}