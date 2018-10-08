#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

class Function{
public:
    float a;
    float b;
    float c;


    Function(){
        this -> a = 0;
        this -> b = 0;
        this -> c = 0;
    }

    Function(float a, float b, float c){
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }

    void solution(){
        float a, b, c;
        float delta;
        float solution1, solution2;
        int check;

        a = this -> a;
        b = this -> b;
        c = this -> c;
        check = 0;

         delta = (b * b) - ( 4 * a * c);

            //cout << a << b << c << endl;
            //cout << delta << endl;

        if(delta < 0) {
            cout << "Function has complex solutions" << endl;
            delta = -delta;
            check = 1;
        }
        else
            cout << "Function has real solutions" << endl;



        solution1 = (-b + sqrt(delta)) / (2 * a);
        solution2 = (-b - sqrt(delta)) / (2 * a);

        if(check == 0)
        cout << "The real solutions of the function are: " << solution1 << ", " << solution2 << endl;
        else
            cout << "The complex solutions of the function are: " << solution1 <<"i, " << solution2 <<"i" << endl;
    }

    void print_function(){
        if(this -> a >= 0)
            cout << this -> a << "*x^2 ";
            else
            cout << "-" << this -> a << "*x^2 ";


        if(this -> b >= 0)
            cout <<"+ " << this -> b << "*x ";
            else
            cout << "- " << this -> b << "*x ";


        if(this -> c >= 0)
            cout << " + " << this -> c;
            else
            cout << " - " << this ->c;

    cout <<" = 0" << endl;
    }
};


int main() {

    Function a2(11, 4, 4);
    Function a3(1, 4, 4);
    a2.print_function();
    a2.solution();

    cout << endl;

    a3.print_function();
    a3.solution();

    cout << "-------------------------------- Press enter to continue --------------------------------";
    getch();

    return 0;
}