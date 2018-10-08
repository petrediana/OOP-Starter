#include <iostream>

using namespace std;

class Mother{
public:
    void print(){
        cout << "I am the mother" << endl;
    }
};

class Daughter: public Mother{
public:
    void print(){
        cout << "I am a daughter" << endl;
    }
};


int main() {
    Daughter Mei;
    Mei.print();
    return 0;
}