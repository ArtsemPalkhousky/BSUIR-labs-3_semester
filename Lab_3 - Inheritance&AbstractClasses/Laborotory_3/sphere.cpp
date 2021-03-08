#include "sphere.h"
#include <math.h>

void Sphere::Volume(){
    cout << "Volume = " << 4 / 3 * (3.14 * pow(radius, 3)) << ";" << endl;
}

void Sphere::Area() {
    cout << "Area = " << 4 * (3.14 * pow(radius, 2)) << "." << endl;
}

void Sphere::Show(){
    cout << "Sphere " << color << ";" << endl;
    cout << "Radius = " << radius <<  ";" << endl;
    Volume();
    Area();
    cout << endl;
}