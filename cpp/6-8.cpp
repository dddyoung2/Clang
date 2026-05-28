#include <iostream>
using namespace std;

int add(int a) {
    return 1+a;
}
int add(int a, int &b= 12){
    b = b+a;
    return b;
}

int main(){
    int s = 10, t=20;
    cout << add(5, s);
}