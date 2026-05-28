#include <iostream>
#include <string>

using namespace std;

class Person{
    string name;
    int age;
public :
    Person(string name="NULL", int age=-1) {
        this->name = name;
        this->age = age;
    }
    ~Person() {
        cout << " Person 객체 소멸 ";
    }
    void personinfo(){
        cout << this->name << " and " << this->age << endl;
    }
    void personset(string name="NULL", int age=-1) {
        (*this).name = name;
        this->age = age;
    }
};

int main() {
    Person* per = new Person;
    per->personinfo();
    string name;
    int age;
    cout << "name : ";
    cin >> name;
    cout << "age : ";
    cin >> age;
    (*per).personset(name, age);
    per->personinfo();
    delete per;
    per =nullptr;
    return 0;
}