#include <iostream>
#include <sstream>
using namespace std;

class Box{
public:
    double length, width, breadth;
    string boxString;

    Box(){
        length = 1;
        width = 1;
        breadth = 0;
    }

    Box(double length, double width, double breadth){
        this -> length = length;
        this -> width = width;
        this -> breadth = breadth;
    }

    Box& operator ++ (){
        length ++;
        width ++;
        breadth ++;

        return  *this;
    }

    operator const char* (){
        ostringstream boxStream;
        boxStream << "Box: " << length << ", " << width << ", " << breadth;

        boxString = boxStream.str();
        return boxString.c_str();
    }

    Box operator + (const Box& box2){
        Box boxSum;
        boxSum.length = length + box2.length;
        boxSum.width = width + box2.width;
        boxSum.breadth = breadth + box2.breadth;

        return boxSum;
    }

    double operator [] (int x){
        if(x == 0){
            return length;
        } else if(x == 1){
            return width;
        } else if (x == 2){
            return  breadth;
        } else
            return 0;
    }

    bool operator == (const Box& box2){
        return ((length == box2.length) && (width == box2.width) && (breadth == box2.breadth));
    }

    bool operator < (const Box& box2){
        double thisSize = length + width + breadth;
        double box2Size = box2.length + box2.width + box2.breadth;

        if(thisSize < box2Size)
            return true;
        else
            return false;
    }

    bool operator > (const Box& box2){
        double thisSize = length + width + breadth;
        double box2Size = box2.length + box2.width + box2.breadth;

        if(thisSize > box2Size)
            return true;
        else
            return false;
    }

    void operator = (const Box& boxToCopy){
        length = boxToCopy.length;
        width = boxToCopy.width;
        breadth = boxToCopy.breadth;
    }
};


int main() {

    Box box1(10, 10, 10);
    Box box2(5, 5, 5);
    Box box3(1, 1, 1);
    ++box1;

    cout << box1 << "\n";
    cout << box2 << "\n";
    cout << box3 << "\n";

    cout << "Box1 + Box2 = " << box1 + box2 << endl;
    cout << "Box1 length: " << box1[0] << ", width: " << box1[1] << ", breadth: " << box1[2] << endl;

    cout << boolalpha;
    cout << "Are boxes equal?: " << (box1 == box2) << endl;
    cout << "Is box1 > box2?: " << (box1 > box2) << endl;
    cout << "Is box1 < box2?: " << (box1 < box2) << endl;

    (box3 = box2);
    cout << box3 << endl;


    return 0;
}