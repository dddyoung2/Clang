#include <iostream>
using namespace std;

class Circle{
    int rad;
public :
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { rad = r; }
    double getArea() { return 3.14 * rad * rad; }
};

Circle::Circle() : rad(1) { cout << " 생성자 " << rad << endl; }
Circle::Circle(int r) : rad(r) { cout << " 생성자 " << rad << endl; }
Circle::~Circle() { cout << " 소멸자 " << rad << endl; }

int main(){
    Circle *p, *q;
    p= new Circle;
    q= new Circle(30);
    cout << p->getArea() << " and " << (*q).getArea() << endl;
    delete p;
    delete q;
    return 0;
}