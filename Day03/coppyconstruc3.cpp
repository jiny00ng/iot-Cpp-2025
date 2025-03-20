///*
//	name 메모리 동적할당
//    복사하는 객체도 동적 할당 받아서 별개로 복사해서 저장되어야 함
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//class Person {
//private:
//    char* name; // 동적 할당을 위한 포인터 변수
//    int age;
//
//public:
//    // 생성자
//    Person(const char* _name, int _age) {
//        printf("constructor call!\n");
//        name = new char[strlen(_name) + 1];     // 동적 할당
//        strcpy(name, _name);                    // 문자열 복사
//        age = _age;
//    }
//
//    // 소멸자 (메모리 해제)
//    ~Person() {
//        printf("destructor call! (name: %s)\n", name);
//        delete[] name; // 동적 할당 해제
//    }
//    /* 복사 생성자(깊은 복사)
//      - 원본과 복사된 객체가 서로 독립적인 메모리 공간을 가지도록 새로운 메모리를 할당하여 복사 */ 
//    Person(const Person& other) {
//        printf("copy constructor!\n");
//        name = new char[strlen(other.name) + 1]; // 새 메모리 할당
//        strcpy(name, other.name); // 문자열 복사
//        age = other.age;
//    }
//    // 정보 출력
//    void printPerson() {
//        printf("name: %s, age: %d\n", name, age);
//    }
//};
//
//int main()
//{
//    Person p("홍길동", 30);
//    p.printPerson();
//
//    Person p2(p); // 복사 생성자 호출
//    p2.printPerson();
//
//    Person p3 = p; // 복사 생성자 호출
//    p3.printPerson();
//
//    return 0;
//}
