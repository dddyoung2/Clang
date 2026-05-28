#include <iostream>
using namespace std;

class Circle{
public :
    int radius;
    // new
    Circle();
    Circle(int r);
    double getArea();

};

Circle::Circle(){
    radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle donut(1);
    double area = donut.getArea();
    cout << "Donut's area is " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "Pizza's area is " << area << endl;
    return 0;
}