///*
//    생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>  // strcpy 사용을 위해 필요
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char* name;
//    int age;
//
//public:
//
//    // 매개변수 생성자
//    MyClass(int n, const char* ps, int n2) {
//        id = n;
//        name = new char[strlen(ps) + 1];  // ps의 크기에 맞게 메모리 할당
//        strcpy(name, ps);  // 이름 복사
//        age = n2;
//    }
//
//    // 소멸자
//    ~MyClass() {
//        delete[] name;  // 동적 할당된 메모리 해제
//    }
//
//    // 데이터 출력
//    void getData() const {
//        cout << "id: " << id << " 이름: " << name << " 나이: " << age << endl;
//    }
//};
//
//int main() {
//    // 생성자를 이용해 객체 초기화
//    MyClass obj(1, "김철수", 20);  // 매개변수 생성자 호출
//    obj.getData();
//
//    return 0;
//}


