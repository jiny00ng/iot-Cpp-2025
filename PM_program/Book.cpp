/* 도서 클래스 구현 */
#include "Book.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 생성자 초기화 리스트 사용
Book::Book(string id, int price, string producer, string title, string author)
    : Product(id, price, producer), title(title), author(author) {
}

// 상품 정보 출력
void Book::showInfo() const {
    Product::showInfo(); // 기본 정보 출력
    cout << left
        << setw(25) << title    // 제목 25칸 정렬
        << setw(15) << author   // 저자 15칸 정렬
        << endl;
}

