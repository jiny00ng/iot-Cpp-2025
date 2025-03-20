///*
//	디폴트로 자동으로 제공하는 생성자 : 디폴트 생성자, 복사 생성자, 소멸자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("constructor call!\n");
//		strcpy(this->name, name);			// this : 객체 자기자신
//		this->age = age;
//	}
//	Person(const Person& other) {						// 복사생성자
//		printf("copy constructor!\n");
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//
//};
//int main()
//{
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//	
//	return 0;
//}
//
//void a(int aa) {
//	aa++;
//}

