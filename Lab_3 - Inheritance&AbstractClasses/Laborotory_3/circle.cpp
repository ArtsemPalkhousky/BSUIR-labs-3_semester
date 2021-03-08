#include "circle.h"

void Circle::Area(){
	cout << "Area = " << 3.141592 * pow(radius, 2) << ";" << endl;
}

void Circle::Perimetr() {
	cout << "Perimeter = " << 3.141592 * 2 * radius << "." << endl;
}

void Circle::Show() {
	cout << "Circle " << color << ";" << endl;
	cout << "Radius = " << radius << ";" << endl;
	Area();
	Perimetr();
	cout << endl;
}