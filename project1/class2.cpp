//// 멤버변수 초기화
//#include <iostream>
//
//// 1. 생성자 초기화
//class Myclass {
//    int a;
//public:
//	Myclass(int _a) { a = _a; }     // 생성자에서 멤버 변수 초기화
//};
//
//// 2. 초기화 리스트
//class Myclass1 {
//    int a;
//public:
//	Myclass1(int _a) : a(_a) {}     // 초기화 리스트를 사용하여 멤버 변수 초기화
//};
//
//// C++11부터 멤버 변수 초기화 가능(in-class 초기화)
//class MyClass2 {
//	int x = 10;			// 선언과 동시에 초기화
//};									
//
//class MyClass3 {
//	static int count;
//};  // static 멤버 변수 초기화는 클래스 외부에서 해야 함
//
//int MyClass3::count = 0;  // static 멤버 변수 초기화
//
//// const 초기화
//class MyClass4 {
//	const int id = 10;  // const 멤버 변수는 반드시 초기화해야 함
//public:
//	MyClass4(int _id) : id(_id) {}  // 생성자 초기화 리스트를 사용하여 초기화  
//};
//
//// 참조 멤버 변수 초기화
//class MyClass5 {
//	int& ref;
//	// int x;
//public:
//	MyClass5(int& r) : ref(r) {}	// 참조 멤버 변수는 초기화 리스트를 통해 초기화해야 함
//	// void f(int _x) : x(_x) {}  // 일반함수는 초기화 리스트를 사용할 수 없음
//};
//
//Myclass a(10);  // 전역에서 Myclass 객체 생성 
//
//int main()
//{
//	Myclass b(10);  // 지역에서 Myclass 객체 생성
//
//    return 0;
//}
