﻿///*
//	멤버함수 연산자 오버로딩: p1 opeartor 연산자(p2)
//	p1 opeartor+(참조 형태 p2)
//*/
//
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int n): value(n) {}
//	MyClass operator+(const MyClass& other) {			// 연산자 오버로딩
//		printf("+ overloading\n");
//		return MyClass(value + other.value);
//	}
//	void showMyClass() {
//			printf("value: %d\n", value);
//	}
//};
//int main()
//{
//	MyClass obj(10);
//	obj.showMyClass();			// 초기값을 가지는 객체 생성
//
//	MyClass obj2(obj);
//	obj2.showMyClass();			// obj를 복사해서 객체 생성
//
//	MyClass obj3 = obj2;
//	obj3.showMyClass();			// obj를 복사해서 객체 생성
//
//	MyClass obj4 = obj + obj2 + obj3;	// 객체를 더한 결과를 가지고 객체 생성
//	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);
//
//	obj4.showMyClass();
//
//	return 0;
//}