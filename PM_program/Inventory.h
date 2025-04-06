/* 상품 목록 관리 클래스 헤더 */
#pragma once
#include <vector>
#include "Product.h"

// 상품 목록 관리 클래스
class Inventory {
private:
    std::vector<Product*> products; // 상품 포인터 리스트

public:
    void addProduct(Product* p); // 상품 추가
    void showAll() const;        // 전체 상품 출력
    ~Inventory();                // 소멸자: 메모리 해제
};
