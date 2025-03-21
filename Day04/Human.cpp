///*
//	step3.
//	char 포인터의 name, int 타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다
//	name을 동적 할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
//	man 객체를 복사하여 copyman 객체를 생성하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//    char* name; // 이름을 저장할 포인터
//    int age;    // 나이
//
//public:
//    // 생성자: name을 동적 할당하고, 나이도 초기화
//    Human(const char* m_name = "", int m_age = 0) {
//        printf("constructor~\n");
//        age = m_age;
//        name = new char[strlen(m_name) + 1]; // 이름을 저장할 만큼 메모리 동적 할당
//        strcpy(name, m_name); // 이름을 복사
//    }
//
//    // 복사 생성자: 깊은 복사를 위해 새로운 메모리 공간에 이름을 복사
//    Human(const Human& other) {
//        printf("copy constructor~\n");
//        age = other.age;
//        name = new char[strlen(other.name) + 1]; // 복사할 이름 크기만큼 메모리 할당
//        strcpy(name, other.name); // 이름 복사
//    }
//
//    // 소멸자: 동적으로 할당된 메모리 해제 - 객체의 생명 주기가 끝날 때 자동으로 호출
//    ~Human() {
//        printf("destructor~\n");
//        delete[] name; // 이름에 할당된 메모리 해제
//    }
//
//    // 정보를 출력하는 함수
//    void showHuman() const {
//        std::cout << "Name: " << name << ", Age: " << age << std::endl;
//    }
//};
//
//int main() {
//    // 이름 "홍명보", 나이 30인 man 객체 생성
//    Human man("홍명보", 30);
//    man.showHuman(); // man 정보 출력
//
//    // man 객체를 복사하여 copyman 객체 생성
//    Human copyman = man;
//    copyman.showHuman(); // copyman 정보 출력
//
//    Human xman;
//    //xman = copyman;
//    //xman.showHuman();
//
//    return 0;
//}
