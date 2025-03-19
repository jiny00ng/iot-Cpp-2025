/*
	step1. 이름과 전화번호는 동적할당
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>      // 문자열 관련 함수 (strcpy, strlen 등)를 사용하기 위한 라이브러리

class Human {
private:                // 외부에서 접근 불가하고 클래스 내부 특별한 메소드를 통해서만 접근 가능 : 캡슐화
    char* name;
    int age;
    char* ptel;

public:                 // 외부에서 객체 접근 가능
    // 생성자: 객체가 생성될 때 호출되며, 이름, 나이, 전화번호를 받아 초기화
    Human(const char* _name, int _age, const char* _ptel)
        : age(_age) {
        name = new char[strlen(_name) + 1];         // 문자열 길이를 계산하고 문자열 끝을 나타내는 null 문자('\0')를 저장할 공간을 추가해서 동적 할당
        strcpy(name, _name);
        ptel = new char[strlen(_ptel) + 1];
        strcpy(ptel, _ptel);
    }

    // 소멸자: 객체가 소멸될 때 호출되며, 동적 할당된 메모리를 해제 -> 메모리 누수 방지
    ~Human() {
        delete[] name;
        delete[] ptel;
    }

    void getData() const {      // 객체 상태를 변경하지 않고 함수호출하는데 반환값 없이 출력만 함
        std::cout << "이름: " << name << "\n나이: " << age << "\n전화번호: " << ptel << std::endl;
    }
};

int main() {
    Human h("홍길동", 30, "010-1234-1234");            // Human 객체 h 생성
    h.getData();
}
