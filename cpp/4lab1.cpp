#include <iostream>
using namespace std;
class Box{
private :
    int length;
public :
    Box(int length=0){
        this->length = length;
        cout << "Box 생성";
    }
    ~Box(){
        cout << "Box 소멸";
    }
    void printLength(){
        cout << "Length is " << this->length << endl;
    }
};

int main() {
    Box* box = new Box(5);
    box->printLength();

    delete box;
    box = nullptr;
    return 0;
}