#include <iostream>

class MyClass {
private:	
	int a = 10;	// a는 private 멤버 변수이므로, 외부에서 직접 접근할 수 없음
	static int static_a;	 // private이라도 static 멤버 변수는 클래스 이름으로 접근 가능
	// 생성자 정의
public:		
	MyClass();
	void print();
	static void set_static_a(int _a);	// static 멤버 함수 "선언"

};

int MyClass::static_a = 100;	// static 멤버 변수는 클래스 외부에서 초기화해야 함
// 메서드의 정의는 클래스 외부에 작성하는 것이 좋음
MyClass::MyClass() {
	a = 20;	// 생성자에서 a를 다시 초기화

}
void MyClass::set_static_a(int _a)	// static 멤버 함수 "정의"
{
	static_a = _a;	// static 멤버 변수는 클래스 이름으로 접근 가능
	// a = 8;	// 일반 멤버 변수는 static 멤버 함수 안에 접근할 수 없음
}
void MyClass::print()	// 객체 메서드 정의
{
	std::cout << a << ". " << static_a << std::endl;
}

int main()
{
	MyClass obj;	
	obj.print();	// 객체 생성 후 print 메서드 호출

	// obj.static_a = 50;	// static 멤버는 클래스 이름인데 객체를 통해 접근하고 있으므로 좋지	않음
	// obj.a = 77;	// a는 객체의 멤버 변수인데 private이므로, 외부에서 직접 접근할 수 없음
	obj.print();	// static 멤버 변수는 클래스 이름으로 접근 가능

	MyClass obj2;
	obj2.print();	// obj2는 MyClass의 또 다른 객체로, static 멤버 변수는 공유됨

	return 0;
}