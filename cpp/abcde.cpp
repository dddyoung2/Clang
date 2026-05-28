#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    // 생성자
    Book(string t, string a, double p) : title(t), author(a), price(p) {
    }

    // 첫 번째 displayInfo() 함수: 제목과 저자만 출력
    void displayInfo() {
        cout << "제목: " << title << endl;
        cout << "저자: " << author << endl;
    }

    // 두 번째 displayInfo() 함수: 제목, 저자, 가격 출력
    void displayInfo(bool fullInfo) {
        cout << "제목: " << title << endl;
        cout << "저자: " << author << endl;
        cout << "가격: " << price << endl;
    }

    // applyDiscount() 함수: 가격에 할인 적용
    void applyDiscount(double discount) {
        price -= price * (discount / 100);
    }

    // 소멸자
    ~Book() {
        cout << "소멸자 호출: " << title << " 삭제됨!" << endl;
    }
};

int main() {

    // 아래 문장이 어떤 내용인지 1줄 주석 작성 : 
    // book1이라는 객체 포인터 동적할당. book1의 제목은 c++..., 저자는 Bjar..., 가격은 50.0인 객체임.
    Book* book1 = new Book("C++ Programming", "Bjarne Stroustrup", 50.0);

    // 첫 번째 displayInfo() 호출
    book1->displayInfo();

    // 두 번째 displayInfo() 호출 (가격 포함)
    book1->displayInfo(true);

    // applyDiscount() 함수 호출: 10% 할인
    book1->applyDiscount(10);
    cout << "할인 후 가격: " << (&*book1)->price << endl;

    // 동적 메모리 해제

    delete book1;
    book1= nullptr;
    return 0;
}