/*
*/
#include <iostream>

class Base {
public:
    void func1() { std::cout << "Base::func1()" << std::endl; }
    // Base 클래스의 멤버 함수 func1()
    // Derived 클래스에서 오버라이딩하지만, 여기서는 가상 함수(virtual)가 아님.
};

class Derived : public Base {
public:
    void func() { std::cout << "Derived::func()" << std::endl; }
    // Derived 클래스의 멤버 함수 func()

    void func1() { std::cout << "Derived::func1()" << std::endl; }
    // Base 클래스의 func1()을 "숨김(hiding)" (오버라이딩이 아님, 가상 함수 아님)
};

class Derived2 : public Derived {
public:
    void func() { std::cout << "Derived2::func()" << std::endl; }
    // Derived2 클래스의 멤버 함수 func()

    void func1() { std::cout << "Derived2::func1()" << std::endl; }
    // Derived 클래스의 func1()을 "숨김(hiding)"
};

int main()
{
    Base* bptr;    // Base 클래스의 포인터 선언
    Derived dobj;  // Derived 클래스 객체 생성

    // Upcasting (자식 객체를 부모 클래스 포인터로 변환)
    bptr = static_cast<Base*>(&dobj);
    // Derived 객체의 주소를 Base* 타입으로 변환 (안전한 캐스팅)
    bptr->func1();
    // Base 클래스의 func1()이 호출됨 (Base::func1())
    // Derived::func1()이 아니라 Base::func1()이 호출되는 이유:
    // - func1()이 가상 함수(virtual function)가 아니므로 정적 바인딩(Static Binding)됨.

    Base bodj;  // Base 클래스의 객체 생성
    Derived* dptr;

    // Downcasting (부모 객체를 자식 클래스 포인터로 변환)
    dptr = static_cast<Derived*>(&bodj);
    // Base 객체를 Derived* 타입으로 변환 (비정상적인 캐스팅)
    // -> bodj는 실제로 Derived 객체가 아니므로 미정의 동작(UB, Undefined Behavior) 발생 가능!

    dptr->func();  // Derived::func()가 호출되지만, bodj는 실제 Derived 객체가 아님 → UB 가능성 있음
    dptr->func1(); // Derived::func1()이 호출될 것으로 보이지만, UB 발생 가능

    // Derived*를 Derived2*로 변환 (추가적인 Downcasting)
    Derived2* dptr2 = static_cast<Derived2*>(dptr);
    // dptr 자체가 이미 잘못된 캐스팅이므로, 여기서도 UB 발생 가능성이 큼.

    dptr2->func();  // Derived2::func()이 호출될 수도 있지만, UB 발생 가능
    dptr2->func1(); // Derived2::func1()이 호출될 수도 있지만, UB 발생 가능

    return 0;
}
