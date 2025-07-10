//#include <iostream>
//#include <cstring>  // strcpy 함수 사용을 위한 헤더
//
//class Myclass {
//private:
//    int id = 10;
//    char name[20];
//    int age;
//
//public:
//    Myclass(int id, char name[20], int age) {
//        this->id = id;  // this.id는 잘못된 표현이다 (→ this->id가 맞는 표현)
//        this->age = age;
//        strcpy(this->name, name);  // 배열을 선언한 후 문자열을 저장하는 경우는 대입연산자 처리X
//
//        // this->name = name;       // 불가능한 대입 (배열은 직접 대입 안됨)
//        // this->name = "홍길동";     // 이것도 불가능
//    }
//};
//
//int main() {
//    // main 함수 내용은 현재 없음
//}
//
//// 주의: 배열은 직접 대입이 불가능하므로, strcpy 함수를 사용하여 문자열을 복사하는 방식으로 초기화합니다.
