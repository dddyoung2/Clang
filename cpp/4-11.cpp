#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << " 여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자." <<endl;
    getline(cin, s, '&');
    cin.ignore();

    string f, r;
    cout << endl << "find : ";
    getline(cin, f, '\n');
    cout << "replace : ";
    getline(cin, r, '\n');

    int index=0;
    while(1){
        int findex = s.find(f, index);
        if (findex == -1) break;
        s.replace(findex, f.length(), r);
        index = findex + r.length();
    }
    cout << s << endl;

}