///*
//	상속 관계에서 객체 생성 및 소멸
//*/
//#include <iostream>
//using namespace std;
//
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an) {
//		num = an;
//		cout << num << " SuperClass consturctor" << endl;
//	}
//	~SuperClass() {
//		cout << num << " SuperClass Destructor" << endl;
//
//	}
//};
//class SubClass : public SuperClass {
//private:
//	int subNum;
//public:
//	SubClass(int an, int an2) : SuperClass(an) {
//		subNum = an2;
//		cout << subNum << " SubClass constructor" << endl;
//	}
//	~SubClass() {
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main()
//{
//	SuperClass s{ 1 };
//	cout << "=++++++++++++++++++++++++++++++++++++++++++" << endl;
//	SubClass sub{ 2, 22 };					// 스택구조 FILO
//
//	return 0;
//}
///* 
//	객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다르다
//*/