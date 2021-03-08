#include "Shape_Class.h"
#include "circle.h"
#include "sphere.h"
#include "square.h"
#include "parallelepiped.h"

int main() {
	Shape* Shapes[4];
	Circle crcl("green", 5);
	Sphere sphr("red", 5);
	Square sqr("pink", 12);
	Parallelepiped prl("blue", 5, 3, 5);
	Shapes[0] = &crcl;
	Shapes[0]->Show();
	Shapes[1] = &sphr;
	Shapes[1]->Show();
	Shapes[2] = &sqr;
	Shapes[2]->Show();
	Shapes[3] = &prl;
	Shapes[3]->Show();
	system("PAUSE");
}