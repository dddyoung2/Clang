#include <iostream>
#include <string>
using namespace std;

class Animal{
public :
    string name;
    int age;
    Animal(string n, int a) : name(n), age(a) {}
    virtual void speak() = 0;
    
};

class Dog : public Animal {
public :
    Dog(string n, int a) : Animal(n, a) {}
    virtual void speak() override { cout << "멍멍\n"; }
    void bark() { cout << "bark bark!\n"; }
};

int main(){
    Animal animal("Generic Animal", 5);
    Dog dog("Buddy", 3);

    animal.speak();
    dog.speak();
    dog.bark();
    return 0;
}