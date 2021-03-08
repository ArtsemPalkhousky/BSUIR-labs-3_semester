#include "square.h"
#include <math.h>

void Square::Area(){
	cout << "Area = " << pow(side, 2) << ";" << endl;
}
void Square::Perimetr() {
	cout << "Perimetr = " << side * 4 << "." << endl;
}

void Square::Show(){
	cout << "Square " << color << ";" << endl;
	cout << "Side = " << side << ";" << endl;
	Area();
	Perimetr();
	cout << endl;
}