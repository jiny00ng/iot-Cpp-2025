/* PM 프로그램 시작 */
#include "Book.h"       // 도서 클래스 포함
#include "Inventory.h"  // 상품 목록 관리 포함
#include <iostream>
using namespace std;

int main() {
    Inventory inventory; // 상품 목록 객체 생성

    // 도서 객체 생성 후 목록에 추가
    Book* b1 = new Book("B001", 15000, "출판사A", "C++ 입문", "홍길동");
    Book* b2 = new Book("B002", 18000, "출판사B", "객체지향 프로그래밍", "이몽룡");
    Book* b3 = new Book("B003", 22000, "출판사C", "자료구조", "성춘향");

    inventory.addProduct(b1);
    inventory.addProduct(b2);
    inventory.addProduct(b3);

    // 전체 상품 목록 출력
    cout << "=== 상품 목록 ===\n" << endl;
    inventory.showAll();

    return 0;
}

