# iot-Cpp-2025
## 1일차 
- C++
    - C언어를 기반으로 **객체 지향 프로그래밍** 개념을 추가하여 발전시킨 언어
    - 클래스 - 객체 생성 설계도
    - 객체 - 클래스로 부터 만들어진 실제 인스턴스
    - 캡슐화 - 데이터 보호를 위해 외부에서 직접 접근 제한, 공개된 함수로만 제어
    - 상속 - 기존(부모) 클래스의 특성을 새로운(자식) 클래스가 물려 받음
    - 다형성 - 같은 이름의 함수가 다양한 형태로 동작
        - 오버로딩(함수의 다중정의) - 같은 이름 함수지만 매개변수 선언(타입이나 개수)이 다른 경우
        - 오버라이딩(상속 관계에서 함수의 재정의) - 상속 받은 부모 클래스 함수를 자식 클래스에서 재정의

1. C언어 기반 C++
    - 입출력(#include <iostream> - 헤더파일 선언문)
        - printf -> std::cout << 출력대상1 << 출력대상2 ... ;
        - scanf  -> std::cin >> '변수';
        - using namespace std;  # std:: 

## 2일차
- C++
2. Class
    - 접근제어 지시자
        - private - 클래스 내부에서만 접근 가능
        - public - 클래스 외부에서도 접근 가능
        - protected - 상속받은 클래스에서 접근 가능
    - 멤버 변수(객체의 속성) - private 영역
        - public 메소드를 통해 접근
            - getter/setter 함수
            ```
            class Person {
            private:
            std::string name;  // private 멤버 변수
            public:
            void setName(std::string newName) { name = newName; }
            std::string getName() { return name; }
            }; 
            ```
    - 멤버함수(메서드 =  객체의 기능) - public 영역

    - 생성자 Constructor 
        - 생성자 호출로 객체 생성
        - 객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않음
        - 생성자는 초기화기능에 사용, 오버로딩 가능
        ```
        MyClass() { value = 0; }           // 기본 생성자 (Default Constructor)
        MyClass(int v) : value(v) {}       // 매개변수 생성자 (Parameterized Constructor)
        MyClass(const MyClass& obj) {      // 복사 생성자 (Copy Constructor)
        value = obj.value;
        }
        ```
    - 소멸자 Destructor 
        - 객제가 소멸 될 때 자동으로 실행되는 함수
        - 동적 메모리 해제에 사용
        ```
        ~클래스이름()
        ```

    - 콜론 초기화(이니셜라이져 리스트)  - 헤드부분 : 멤버 번수(초기화 변수)
        - 생성자가 실행되기 전 헤드 부분에서 먼저 멤버 변수 초기화
            1. const 멤버 변수
            2. 레퍼런스 변수
            3. 객체 멤버 변수
            ```
            class Test {
            private:
            int a, b;
            public:
            Test(int x, int y) : a(x), b(y) {}  // 콜론 초기화
            // Test(int x, int y) { a = x; b = y; }  // 일반적인 초기화 (비효율적)
            };
            ```

## 3일차
- C++
3. 복사 생성자
- 같은 클래스의 객체를 인자로 받아 새로운 객체를 생성
- 기존 객체의 데이터를 이용해 새로운 객체 초기화
```
ClassName(const ClassName& other);
```
 - 객체를 다른 객체로 초기화할 때
 - 객체를 값으로 함수에 전달할 때
 - 객체를 값으로 변환할 때
    - 기본 복사 생성자(얕은 복사)
        - 같은 메모리 주소 공유(주소값 복사)
    - 깊은 복사 생성자
        - 새로운 메모리 공간 할당(서로 독립적인 메모리 공간)
        - 동적 할당된 데이터 포함
- 이동 생성자
    - 자원 복사 대신 이동을 수행하여 성는 최적화
- 변환 생성자
    - 주어진 타입을 다른 타입을 변환
    - 입력 매개변수가 하나만 가질 수 있음
    - 암묵적인 변환을 허용하지 않음 - explicit

## 4일차
- C++
4. friend, static, const
    - friend
        - 클래스의 멤버가 아니지만 클래스의 private와 protected 멤버에 접근할 수 있는 함수
    - static
        - 함수가 호출될 때마다 초기화되지 않고, 이전 호출의 값을 유지
        - 클래스의 모든 객체에서 공유
        - 클래스의 모든 인스턴스가 하나의 변수를 공유
    - const
        - 초기화 후 값을 변경 불가
        - 반드시 생성자에서 초기화
        ```
        const int* ptr1;  // 값을 변경할 수 없지만, 포인터는 변경 가능
        int* const ptr2;  // 포인터는 변경할 수 없지만, 값은 변경 가능
        const int* const ptr3;  // 포인터와 값 모두 변경할 수 없음
        ```