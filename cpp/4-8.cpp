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
    int ra;
    while(1){
        cout << "rad input : ";
        cin >> ra;
        if(ra<0) break;
        Circle *p = new Circle(ra);
        cout << "면적은 " << p->getArea() << endl;
        delete p;
    }
    return 0;
}