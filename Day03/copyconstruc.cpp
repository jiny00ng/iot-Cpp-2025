///*
//	복사생성자(copyconstructor)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char m_name[20];
//	int m_age;
//public:
//	Person(const char* pname, int age) {
//		printf("Constrcutor call!\n");
//		strcpy_s(m_name, pname);
//		m_age = age;
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
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