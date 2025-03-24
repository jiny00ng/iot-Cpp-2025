///*
//	상속에서 객체 포인터
//	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅된다.
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class!\n"); }
//};
//class Derived : public Base {				
//public:
//	void show() { printf("Derived Class!\n"); }	// 오버라이딩(재정의) - 부모 클래스와 자식 클래스 간 동일한 이름의 메소드 존재
//};
//int main()
//{
//	Base* bptr = nullptr;
//	Derived* dptr = nullptr;
//
//	Derived obj;			// 파생 클래스 객체 생성
//	dptr = &obj;
//	dptr->show();
//
//	bptr = &obj;			// 부모 타입의 포인터로 자식 타입의 객체를 가리킨다
//	bptr->show();
//	//bptr->Derived::show();
//
//	return 0;
//}