#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public :
    Power(int kick=0, int punch=0){
        this->kick = kick;
        this->punch = punch;
    }
    void change_power(int kick=0, int punch = 0){
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    Power operator+(Power op2);
    Power operator+(int op2);
    Power operator++(int x);
    bool operator==(Power op2);
    Power& operator+=(Power op2);
    Power& operator++();
    bool operator!();
    friend Power operator+(int op1, Power op2);
    Power& operator <<(int n);
};

void Power::show(){
    cout << "kick=" << kick << ", punch=" << punch << endl; 
}

Power Power::operator+(Power op2) {
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

Power Power::operator+(int op2){
    Power tmp;
    tmp.kick = this->kick + op2;
    tmp.punch = punch + op2;
    return tmp;
}

bool Power::operator==(Power op2){
    if (this->punch == op2.punch && this->kick == op2.kick)
        return true;
    else return false;
}

Power& Power::operator+=(Power op2){
    kick = kick + op2.kick;
    punch = punch + op2.punch;
    return *this;
}

Power& Power::operator++(){
    kick++;
    punch++;
    return *this;
}

bool Power::operator!(){
    if (this->kick != 0 && this->punch != 0) return false;
    else return true;
}

Power Power::operator++(int x){
    Power tmp;
    kick++;
    punch++;
    return tmp;
}

Power operator+(int op1, Power op2){
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}
Power& Power::operator<<(int n){
    kick += n;
    punch += n;
    return *this;
}

int main(){
    Power a(3,5), b(4,6), c;
    c = a+b;

    cout << "a, b, c\n";
    a.show();
    b.show();
    c.show();
    if (a == b) {
        cout << "It is same of two instant's power" << endl;
    } else {
        cout << "Not same." << endl;
    }

    b.change_power(3, 5);
    if (a == b) {
        cout << "It is same of two instant's power" << endl;
    } else {
        cout << "Not same." << endl;
    }
    cout << "a, b\n";
    a.show();
    b.show();

    b.change_power(4, 6);
    cout << "a, b\n";
    a.show();
    b.show();
    c = a+=b;
    cout << "a, c\n";
    a.show();
    c.show();

    cout << "b\n";
    b= a+2;
    b.show();

    cout << "a, b, prefix and a, b\n";
    a.show();
    b.show();
    b = ++a;
    a.show();
    b.show();

    cout << "change power and !a\n";
    a.change_power(0,0);
    b.change_power(5,5);
    if (!a) cout << "a의 파워가 0이다.\n";
    else cout << "a의 파워가 0이 아니다." << endl;
    if (!b) cout << "b의 파워가 0이다.\n";
    else cout << "b의 파워가 0이 아니다." << endl;

    cout << "before and after postfix a , b \n";
    a.show();
    b.show();
    b = a++;
    a.show();
    b.show();

    cout << "first int and after is class" << endl;
    b = 2+a;
    a.show();
    b.show();

    cout << "a" << endl;
    a.change_power(1, 2);
    a << 3 << 5 << 6;
    a.show();
}