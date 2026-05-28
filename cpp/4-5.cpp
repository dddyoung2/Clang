#include <iostream>
using namespace std;

int main(){
    int *p;
    p = new int;
    p = NULL;
    if(!p){
        cout << "you cannot assign the memory." << endl;
        return 0;
    }
    /*
    * p = 5;
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;
    */
    delete p;
    return 0;
}