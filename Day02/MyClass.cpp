///*
//	 문자열 저장시 배열에 저장하고 포인트 변수를 이용해 가져옴
//*/
//#define _CRT_SERCURE_NO_WARNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    // char name[20];          // 동적할당
//    char* name;
//    int age;
//public:
//    //MyClass() {}                // default 생성자
//    ~MyClass() { delete[] name; }               // 소멸자(자동 호출 - 동적할당 경우 말고는 별도로 작성할 필요 없음)
//    MyClass(int _id, char* _name, int _age);
//    void getData () const;
//};
//
//MyClass::MyClass(int _id, char* _name, int _age) {
//    id = _id;
//    age = _age;
//    name = new char[strlen(_name) + 1];         // 동적할당
//    //name = _name;     // 배열으 선언한 후 대입 연사자를 사용하여 값을 직접 할당할 수 없음
//    strcpy(name, _name);
//}
//void MyClass::getData() const {                 // 상수 멤버 함수(모든 멤버들을 상수화시킴)
//    cout << "id: " << ", name: " << name << ", 나이: " << age << endl;
//    // id = 2;
//}
//int main() 
//{
//    //MyClass obj;
//    //obj.setData(1, "김철수", 20);		// 데이터 초기화
//    //obj.getData();
//	MyClass obj(1, "김영희", 20);	
//    obj.getData();
// 
//    return 0;
//}