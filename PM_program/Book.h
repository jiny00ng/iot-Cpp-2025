/* 도서 클래스 헤더 */
#pragma once
#include "Product.h" // 부모 클래스 포함

// 도서 클래스: Product를 상속
class Book : public Product {
private:
    string title;   // 책 제목
    string author;  // 저자

public:
    // 생성자
    Book(string id, int price, string producer, string title, string author);

    // 상품 정보 출력 (오버라이딩)
    void showInfo() const override;
};
