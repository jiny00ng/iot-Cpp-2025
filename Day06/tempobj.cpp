///*
//
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		cout << num << " constructor" << endl;
//	}
//	~MyClass() { cout << num << " destructor " << endl; }
//};
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj2 = MyClass{ 20 };
//	MyClass{ 30 };						// 임시객체: 객체에 이름이 없음 - 다음줄로 넘어가기 전에 사라짐(메모리 공간에 할당 받지 못해서)
//
//	cout << "bye~~" << std::endl;
//
//	return 0;
//}