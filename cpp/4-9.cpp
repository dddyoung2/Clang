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
    Circle *pArr = new Circle[3]{10, 20, 30};

    for(int i = 0; i< 3; i++){
        cout << pArr[i].getArea() << endl;
    }
    Circle *p = pArr;
    for (int i=0; i<3; i++){
        cout << p->getArea() << endl;
        p++;
    }

    delete [] pArr;
    return 0;
}