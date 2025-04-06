/* 상품 목록 관리 클래스 구현 */
#include "Inventory.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 상품 추가
void Inventory::addProduct(Product* p) {
    products.push_back(p);
}

// 전체 상품 출력
void Inventory::showAll() const {
    // 헤더 출력
    cout << left
        << setw(10) << "ID"
        << setw(15) << "가격(원)" 
        << setw(15) << "제조사"
        << setw(25) << "제목"
        << setw(15) << "저자"
        << endl;
    cout << string(75, '-') << endl;

    // 각 상품 출력
    for (auto p : products) {
        p->showInfo();
    }
}

// 소멸자: 동적 할당된 메모리 해제
Inventory::~Inventory() {
    for (auto p : products)
        delete p;
}

