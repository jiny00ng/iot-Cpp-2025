///*
//*/
//#include <iostream>
//
//class MyClass {
//public:
//    int value;  // 멤버 변수 value (객체의 값을 저장)
//
//    // 생성자: 값이 주어지지 않으면 디폴트 값 0을 가지도록 설정
//    MyClass(int v = 0) : value(v) {}  // value를 초기화하는 생성자
//
//    // 멤버 함수: 객체의 value 값을 출력하는 함수
//    void showMyClass() {
//        std::cout << "value: " << value << std::endl;
//    }
//};
//
//int main() {
//    // 동적 객체 생성: MyClass의 객체를 동적으로 할당하고, 값 10을 초기화
//    MyClass* ptr = new MyClass{ 10 };  // `new` 연산자로 힙에 객체를 동적 할당 (value는 10으로 설정)
//
//    // 동적으로 생성된 객체의 멤버 함수 호출
//    ptr->showMyClass();  // `ptr`이 가리키는 객체의 `showMyClass()` 호출 -> 'value: 10' 출력
//
//    // 동적으로 생성된 객체의 value 값을 출력 (printf를 사용하여 출력)
//    printf("value: %d\n", ptr->value);  // 'value: 10' 출력
//
//    // 동적 메모리 해제
//    delete ptr;  // `delete`를 사용하여 동적으로 할당한 메모리 해제 (메모리 누수를 방지)
//
//    // 스택 객체 생성: MyClass 객체 `obj`를 스택에 생성하고, 디폴트 값인 0으로 초기화
//    MyClass obj{};  // 값 없이 생성하면 디폴트 값 0으로 초기화
//
//    // `obj`의 주소를 ptr에 할당
//    ptr = &obj;  // `ptr`은 이제 `obj`를 가리키게 됨
//
//    // 스택 객체 `obj`의 멤버 함수 호출
//    ptr->showMyClass();  // 'value: 0' 출력 (obj의 `value`는 0으로 초기화됨)
//
//    // 역참조 연산자(*)를 사용하여 객체에 접근
//    (*ptr).showMyClass();  // 'value: 0' 출력 (역참조 연산자로 동일하게 접근)
//
//    // 스택 객체 `obj`의 value 값을 출력
//    printf("value: %d\n", ptr->value);  // 'value: 0' 출력 (obj의 value는 0)
//
//    return 0;
//}
