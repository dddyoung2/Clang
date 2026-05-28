#include <iostream>
using namespace std;

class Power{
    int kick, punch;
public :
    Power operator+(Power op2){
        Power tmp;
        tmp.kick = kick + op2.kick;
        tmp.punch = punch + op2.punch;
        return tmp;
    }
    Power operator==(Power op2);
};

Power Power::operator==(Power op2){
    return (kick == op2.kick) && (punch == op2.punch);
}