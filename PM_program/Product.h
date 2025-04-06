/* 상품 클래스 헤더 */
#pragma once // 헤더파일이 중복 포함되지 않도록 방지

#include <string>
using namespace std;

// 기본 상품 클래스 정의
class Product {
protected:
    string id;         // 상품 ID
    int price;         // 상품 가격
    string producer;   // 제조사

public:
    // 생성자: ID, 가격, 제조사를 받아 초기화
    Product(string id, int price, string producer);

    // 가상 함수: 자식 클래스에서 오버라이딩 가능
    virtual void showInfo() const;

    // 상품 ID 반환 (캡슐화된 접근 함수)
    string getId() const;

    // 연산자 오버로딩: 상품 ID 비교
    bool operator==(const Product& other) const;

    // 소멸자 (다형성을 위한 가상 소멸자)
    virtual ~Product() {}
};


