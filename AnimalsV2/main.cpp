#include <iostream>
#include <string>
#include <vector>


class Animal{
protected:
    std::string name;
    double height;
    double weight;

    static int numberOfAnimals;

public:
    std::string GetName(){
        return name;
    }

    void SetName(std::string name){
        this -> name = name;
    }

    double GetHeight(){
        return height;
    }

    void SetHeight(double height){
        this -> height = height;
    }

    double GetWeight(){
        return weight;
    }

    void SetWeight(double weight){
        this -> weight = weight;
    }

    void SetAll(std::string, double, double);
    Animal(std::string, double, double);
    Animal();
    ~Animal();
    static int GetNumberOfAnimals(){
        return numberOfAnimals;
    }
    void ToString();
};

int Animal::numberOfAnimals = -1;

void Animal::SetAll(std::string name, double height, double weight) {
    this -> name = name;
    this -> weight = weight;
    this -> height = height;
    Animal::numberOfAnimals ++;
}

Animal::Animal(std::string name, double height, double weight) {
    this -> name = name;
    this -> height = height;
    this -> weight = weight;
    Animal::numberOfAnimals ++;
}

Animal::Animal() {
    this -> name = "";
    this -> height = 0;
    this -> weight = 0;
    Animal::numberOfAnimals ++;
}

Animal::~Animal() {
    std::cout << "Animal " << this -> name << " destroyed\n";
    Animal::numberOfAnimals --;
}

void Animal::ToString() {
    std::cout << this -> name <<" is " << this -> height <<" tall " << this -> weight <<" kgs fat\n\n";
}

class Dog: public Animal{
private:
    std::string sound = "Woof";

public:
    void MakeSound(){
        std::cout <<"The dog" << this -> GetName() << "says " << this -> sound <<"\n";
    }

    Dog(std::string, double, double, std::string);
    Dog(): Animal(){};
    void ToString1();

};

Dog::Dog(std::string name, double height, double weight, std::string sound) : Animal(name, height, weight){
    this -> sound = sound;
}

void Dog::ToString1() {
    std::cout << this -> name <<" is " << this -> height <<" tall " << this -> weight <<" kgs fat and says " << this -> sound <<" \n\n";
}
int main() {
    //std::cout << "Hello, World!" << std::endl;

    Animal fred;
    //fred.ToString();

    fred.SetHeight(33);
    fred.SetWeight(10);
    fred.SetName("Fred");
    fred.ToString();

    Animal Bear;
    Bear.SetAll("Bleeli", 180, 80);
    Bear.ToString();

    Dog spot("Spot", 38, 16, "Woooof");
    spot.ToString1();

    std::cout <<"Number of animals: " << Animal::GetNumberOfAnimals() << " \n";

    //std::cout <<"\n " << Bear.GetWeight() <<" " << Bear.GetHeight();


    return 0;
}