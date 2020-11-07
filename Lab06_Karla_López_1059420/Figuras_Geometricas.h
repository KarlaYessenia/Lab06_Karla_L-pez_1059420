#pragma once
class Figuras_Geometricas
{
	public:
		double width;
		double height;
		int type;
		double area;
		double perimeter;

		Figuras_Geometricas() { width = 0; height = 0; type = 0; area = 0; perimeter = 0; };
		~Figuras_Geometricas() {};
		virtual double GetArea();
		virtual double GetPerimeter();
};

