///*
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//    int num;
//public:
//    // 생성자: 객체가 생성될 때 호출됨
//    MyClass(int n) : num(n) {
//        cout << this << ", " << num << " constructor" << endl;
//    }
//
//    // 복사 생성자: 객체가 복사될 때 호출됨 (깊은 복사 수행)
//    MyClass(const MyClass& other) : num(other.num) {
//        cout << this << " copy constructor" << endl;
//    }
//
//    // 소멸자: 객체가 스코프를 벗어나면 호출됨 (메모리 해제)
//    ~MyClass() {
//        cout << this << ", " << num << " destructor" << endl;
//    }
//
//    // 데이터 설정 함수 (일반 멤버 함수에서는 콜론 초기화 불가능)
//    void setData(int n) { num = n; }
//};
//
//// func() 함수: MyClass 객체를 매개변수로 받고 반환하는 함수
//MyClass func(MyClass aobj) { // (1) obj가 값 전달되면서 복사 생성자 호출
//    cout << "func()" << endl;
//    return aobj; // (2) aobj가 반환될 때 복사 생성자 호출
//}
//
//int main()
//{
//    // 객체 obj 생성 (일반 생성자 호출)
//    MyClass obj{ 10 };
//
//    // func()를 호출하여 새로운 객체 obj1 생성
//    MyClass obj1{ func(obj) };
//    // func(obj)를 호출하면:
//    // (1) obj → aobj로 값이 전달되면서 복사 생성자 호출
//    // (2) aobj가 반환될 때 임시 객체가 생성되면서 복사 생성자 호출
//    // (3) 임시 객체가 obj1으로 복사되면서 또 복사 생성자 호출 
//
//    cout << "bye~~" << endl;
//
//    return 0;
//}
