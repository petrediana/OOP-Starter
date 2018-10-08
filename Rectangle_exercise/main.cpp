#include <iostream>
#include "Rectangle.h"
#include <cstdlib>
using namespace std;

Rectangle::Rectangle() {
    height = 1;
    width  = 1;
};

Rectangle::Rectangle(double h, double w) {
    setHeight(h);
    setWidth(w);
}

void Rectangle::setHeight(double h) {
    if (h > 0 )
        height = h;
    else{
        cout << " Invalid input for height!" << endl;
        exit(0);
    }
}

void Rectangle::setWidth(double w) {
    if(w > 0)
        width = w;
    else{
        cout << " Invalid input for width!" << endl;
        exit(0);
    }
}

int main() {
    double height = -1;
    double width = -1;

    while(height != 0 && width != 0){
        cout << "Enter the height: ";
        cin >> height;

        cout << "Enter the width: ";
        cin >> width;

        Rectangle rect_object(height, width);
        cout << "Area of the rectangle is: " << rect_object.getArea() << endl;
        cout << "Perimeter of the rectangle: " << rect_object.getPerimeter() << endl;

        cout << endl;
    }

    return 0;
}