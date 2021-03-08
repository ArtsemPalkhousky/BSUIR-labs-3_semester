#pragma once
#include "TwoDShape_Class.h"

class Circle : public TwoDshape{
private:
    double radius;
public:
    Circle(string color, double radius) : TwoDshape(color){
        cout << "Constructor circle" << endl << endl;
        this->radius = radius;
    }
    void Area() override;
    void Show() override;
    void Volume() override { };
    void Perimetr() override;
    ~Circle(){
        cout << "Destructor circle" << endl;
    };
};