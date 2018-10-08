#include <iostream>
using namespace std;

class Shape{
protected:
    double width;
    double height;


public:
    void set_data(double a, double b){
        width = a;
        height = b;
    }
};

class Rectangle: public Shape{

public:
    double Area(){
        return (width * height);
    }
};

class Triangle: public Shape{
public:
    double Area(){
        return ((width * height) / 2);
    }
};

int main() {
    Rectangle rect_object;
    Triangle tri_object;

    rect_object.set_data(3, 4);
    tri_object.set_data(5, 6);

    cout << "Rectangle Area: " << rect_object.Area() << endl;
    cout << "Triangle Area: " << tri_object.Area() << endl;
    return 0;
}