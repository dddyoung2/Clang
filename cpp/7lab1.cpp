#include <iostream>
using namespace std;

class Vector2D{
    double x;
    double y;
public :
    Vector2D(double x, double y) : x(x), y(y) {}
    Vector2D operator+(Vector2D op2){
        return Vector2D(this->x+op2.x, this->y+op2.y);
    }
    Vector2D operator-(Vector2D op2){
        return Vector2D(this->x - op2.y, this->y - op2.y);
    }
    Vector2D operator*(double scalar){
        return Vector2D(this->x * scalar, this->y * scalar);
    }
    friend ostream& operator<<(ostream& os, Vector2D& vec);
};

ostream& operator<<(ostream& os, Vector2D& vec){
    os << "( " << vec.x << ", " << vec.y << " )";
    return os;
}

int main(){
    Vector2D v1(3.0, 4.0);
    Vector2D v2(1.0, 2.0);

    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;
    Vector2D scaled = v1 * 2.0;

    cout << "V1 : " << v1 << endl;
    cout << "v2 : " << v2 << endl;
    cout << "sum : " << sum << endl;
    cout << "diff : " << diff << endl;
    cout << "Scaled v1 : " << scaled << endl;
    return 0;
}