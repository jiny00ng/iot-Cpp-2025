///*
//	변환 생성자
//	다른 타입의 객체로 변환될 때 호출되는 생성자
//	- 입력을 한개만 가지는 생성자
//	- 암묵적인 변환을 허용하지 않음 - explicit
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int val;
//public:
//	explicit MyClass(int value) {
//		printf("변환 생성자 호출!\n");
//		this->val = value;
//	}
//	void printMyClass() {
//		printf("value: %d\n", val);
//	}
//};
//int main()
//{
//	// MyClass obj = 10;			// 변환생성자 호출 - 객체의 변환이 일어남
//	// obj.printMyClass();
//
//	MyClass obj2(10);				// 변환생성자 매개변수 초기화
//	obj2.printMyClass();
//
//	return 0;
//}