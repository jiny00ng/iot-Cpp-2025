///*
//	생성자 constructor
//    생성자 호출로 객체 생성
//    객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
//    생성자는 초기화기능에 사용
//    생성자는 오버로딩 가능
//*/
//
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//    int m_num1;
//    int m_num2;
//
//public:
//    ~MyClass(){}                         // 소멸자
//    MyClass() : m_num1(0), m_num2(0) {}  // 기본 생성자에서 초기화
//    MyClass(int n) : m_num1(n), m_num2(0) {}  // 하나의 값만 받는 생성자
//    MyClass(int n1, int n2) : m_num1(n1), m_num2(n2) {}  // 두 개의 값을 받는 생성자
//
//    void printData() {
//        cout << "나는 MyClass의 인스턴스입니다." << endl;
//        cout << "m_num1: " << m_num1 << "  m_num2: " << m_num2 << endl;
//    }
//};
//
//int main() {
//    MyClass obj;  // 기본 생성자 호출
//    obj.printData();
//
//    MyClass obj2(100);  // 하나의 인자만 받는 생성자 호출
//    obj2.printData();
//
//    MyClass obj3(100, 200);  // 두 개의 인자를 받는 생성자 호출
//    obj3.printData();
//
//    return 0;
//}
