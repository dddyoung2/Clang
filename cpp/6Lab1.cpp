#include <iostream>
#include <string>
using namespace std;

int calculate(int a, int b){
    return a + b;
}

double calculate(double a, double b){
    return a * b;
}

string calculate(string a, string b){
    return a + " " + b;
}

int main(){
    int a =3, b =5;
    double x = 2.5, y = 4.0;
    string s1 = "Hello", s2 = "World";

    cout << "정수 계산 : " << a << " + " << b << " = " << calculate(a, b) << endl;
    cout << "실수 계산 : " << a << " * " << b << " = " << calculate(a, b) << endl;
    cout << "문자열 붙이기 : " << s1 << "와 " << s2 << " = " << calculate(s1, s2);
}