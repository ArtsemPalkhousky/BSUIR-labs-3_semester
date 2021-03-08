#include "parallelepiped.h"
#include <math.h>

void Parallelepiped::Volume(){
    cout << "Volume = " << (sideA * sideB * hight)/2 << ";" << endl;
}

void Parallelepiped::Area() {
    cout << "Area = " << (sideA * sideB) + (hight * sideA) + (hight * sideB) << "." << endl;
}

void Parallelepiped::Show(){
    cout << "Parallelepiped " << color << ";" << endl;
    cout << "Side A = " << sideA << ";" << endl << "Side B = " << sideB << ";" << endl << "Hight = " << hight << ";" << endl;
    Volume();
    Area();
    cout << endl;
}