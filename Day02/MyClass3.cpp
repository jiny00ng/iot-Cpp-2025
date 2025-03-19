///*
//    동적할당
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>  // strcpy 사용을 위해 필요
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char* name;  // 동적 할당 받을 char 배열
//    int age;
//
//public:
//
//    // 생성자에서 id, name, age 초기화
//    MyClass(int n, const char* ps, int n2) {
//        id = n;
//        name = (char*)malloc(strlen(ps) + 1);  // 문자열 길이에 맞게 메모리 할당
//        if (name == nullptr) {
//            cout << "메모리 할당 실패!" << endl;
//            return;
//        }
//        strcpy(name, ps);  // name에 ps 복사
//        age = n2;
//    }
//
//    // 소멸자에서 malloc으로 할당된 메모리 해제
//    ~MyClass() {
//        free(name);  // malloc으로 할당된 메모리 해제
//    }
//
//    void getData() const {
//        cout << "id: " << id << " 이름: " << name << " 나이: " << age << endl;
//    }
//};
//
//int main() {
//    // 생성자를 이용해 객체 초기화
//    MyClass obj(1, "김철수", 20);  // 생성자에서 id, name, age 초기화
//    obj.getData();  // 데이터를 출력
//
//    return 0;
//}
