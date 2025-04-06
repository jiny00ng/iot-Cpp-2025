/* 상품 클래스 구현 */
#include "Product.h"
#include <iostream>
#include <iomanip>  // setw 등 정렬 함수 사용
using namespace std;

// 생성자 구현
Product::Product(string id, int price, string producer)
    : id(id), price(price), producer(producer) {
}

// 기본 정보 출력 (정렬 포함)
void Product::showInfo() const {
    cout << left
        << setw(10) << id        // ID 10칸 정렬
        << setw(15) << price      // 가격 10칸 정렬
        << setw(15) << producer; // 제조사 15칸 정렬
}

// ID getter 함수
string Product::getId() const {
    return id;
}

// 상품 ID 비교 (== 오버로딩)
bool Product::operator==(const Product& other) const {
    return this->id == other.id;
}
