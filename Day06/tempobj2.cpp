﻿///*
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		cout << num << " constructor " << endl;
//	}
//	~MyClass() { cout << num << " destructor " << endl; }
//	void setData(int n) { num = n; }
//};
//int main()
//{
//	//MyClass* ptr = &MyClass{ 10 };
//	//MyClass* obj2 = MyClass{ 20 };			// 임시객체는 참조를 사용할 수 없다
//
//	MyClass obj = MyClass{ 10 };
//	obj.setData(20);
//
//	MyClass&& obj2 = MyClass{ 20 };
//	obj.setData(22);
//
//	const MyClass& obj3 = MyClass{ 30 };
//	//obj3.setData(33);							// 상수참조를 하므로 값 변경은 불허함
//
//	cout << "bye~~" << endl;
//
//	return 0;
//}