//
// Created by Diana on 02-Aug-18.
//

#ifndef RECTANGLE_EXERCISE_RECTANGLE_H
#define RECTANGLE_EXERCISE_RECTANGLE_H

class Rectangle{

    private:
        double height;
        double width;

    public:
        Rectangle();
        Rectangle(double height, double width);

    void setHeight(double);
    void setWidth(double);

    /*double getHeight(){
        return  height;
    }
    double getWidth(){
        return  width;
    }
*/
    double getArea(){
        return height * width;
    }
    double getPerimeter(){
        return (height * 2) + (width * 2);
    }
};







#endif //RECTANGLE_EXERCISE_RECTANGLE_H
