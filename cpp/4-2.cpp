#include <iostream>
using namespace std;

class Circle{
    int radius;
public :
    Circle();
    Circle(int r);
    void setRadius(int r);
    double getArea();
};

Circle::Circle(){ radius = 1; }
Circle::Circle(int r) : radius(r) {}
void Circle::setRadius(int r){
    radius = r;
}
double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle circleArr[3] = {Circle(10), Circle(20), Circle(30)};

    for (int i=0; i<3; i++){
        cout << "Circle " << i << " 면적은 " << (*(circleArr+i)).getArea()
        << endl;
    }

    Circle *p;
    p = circleArr;
    for(int i=0; i<3; i++){
        cout << "Circle " << i << " 면적은 " << (*p).getArea() << endl;
        p++;
    }

    return 0;
}