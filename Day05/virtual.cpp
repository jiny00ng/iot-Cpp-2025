///*
//	virtual function : 파생클래스에서 재정의할 것을 약속받은 멤버 함수를 말하며 Base 클래스의 멤버 함수에 
//	virtual 키워드를 사용하여 만든다.
//	virtual table이 만들어지고 dynamic binding으로 동작
//*/
//#include <iostream>
//using namespace std;
//
//// Base(기초) 클래스 정의
//class Base {
//public:
//    // 가상 함수 (Virtual Function)
//    // 파생 클래스에서 재정의(오버라이딩)할 가능성이 있는 함수
//    virtual void func1() { cout << "B::func1()" << endl; } // 가상 함수
//    virtual void func2() { cout << "B::func2()" << endl; } // 가상 함수
//
//    // 일반 멤버 함수 (가상 함수가 아님)
//    void func3() { cout << "B::func3()" << endl; }
//};
//
//// Derived(파생) 클래스 정의
//class Derived : public Base {
//public:
//    // func1()을 오버라이딩 (Base 클래스에서 virtual로 선언되었기 때문)
//    void func1() override { cout << "D::func1()" << endl; }
//
//    // func3()을 새롭게 정의 (Base에서 가상 함수가 아니므로 오버라이딩이 아니라 숨김(Hiding) 처리됨)
//    void func3() { cout << "D::func3()" << endl; }
//
//    // Derived 클래스만의 새로운 함수
//    void func4() { cout << "D::func4()" << endl; }
//};
//
//int main() {
//    Base b;      // Base 클래스 객체
//    Derived d;   // Derived 클래스 객체
//
//    // 업캐스팅(Upcasting) : 기초 클래스 타입의 포인터로 파생 클래스 객체를 가리킴
//    Base* bptr = new Derived();
//
//    // 가상 함수 호출: func1()은 Derived에서 오버라이딩되었으므로 Derived의 func1() 실행
//    bptr->func1();  // 동적 바인딩(Dynamic Binding) → "D::func1()"
//
//    // func2()는 가상 함수이지만 Derived에서 재정의되지 않았으므로 Base의 func2() 실행
//    bptr->func2();  // "B::func2()"
//
//    // func3()은 가상 함수가 아니므로 포인터 타입(Base)에 따라 Base의 func3() 호출
//    bptr->func3();  // "B::func3()"
//
//    // func4()는 Base 클래스에는 존재하지 않으므로 bptr->func4(); 는 컴파일 오류 발생
//
//    delete bptr;  // 동적으로 할당한 객체 삭제 (Base 클래스에 가상 소멸자 필요)
//
//    // 일반 Base 클래스 객체의 함수 호출
//    bptr = &b;
//    bptr->func1();  // "B::func1()"
//    bptr->func2();  // "B::func2()"
//    bptr->func3();  // "B::func3()"
//
//    return 0;
//}
///*
//	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한
//	이때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 된다
//	이것은 컴파일시 포인터형으로 바인딩 되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라 바인딩할 함수를 결정
//*/