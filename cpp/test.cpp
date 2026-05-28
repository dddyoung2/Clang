#include <iostream>
using namespace std; 

float square(float a=4){
    cout << "float" << endl;
    return a*a;
}

double square(double a){
    cout << "double" << endl;
    return a*a;
}

int main(){
    cout << square(3.0);
    cout << endl;
    cout << square((float) 3);
    cout << endl << square();
    return 0;
}