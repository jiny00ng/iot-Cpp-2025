//#include <stdio.h>
//
//int a;
//const int global_c = 100;
//
//int func2() {
//
//}
//void func() {
//	printf("fuction: %p\n", func);		// 함수의 이름 = 함수의 주소 = 배열의 주소
//}
//int main()
//{
//	int b = 100;			// b는 일반 변수이므로, 값을 변경할 수 있음
//	static int c;
//	const int d = 10;		// 상수화는 초기화가 필요함!
//	const int* p = &d;
//	char arr[20] = "Hello, World!";
//	// d = 20;		// 상수화는 변경이 불가능함!
//	int* pd = &b;	// pd는 일반 포인터이므로, b의 값을 변경할 수 있음 
//	const int* pb;
//	pb = &d;
//	//int c = 20;	    // c는 static 변수이므로, 프로그램 전체에서 유지됨
//	int* const ppb = &b;	// pb는 const int*이지만, pb 자체는 const가 아님
//	*ppb = 20;	// ppb는 const int*이지만, ppb 자체는 const가 아님
//	//ppb = &c;	// ppb의 주소를 변경할 수 없음! (pb는 const int*이므로, pb 자체는 const임)
//
//	// *pb = 10;	// pb는 const int*이므로, *pb를 통해 d의 값을 변경할 수 없음!
//	
//
//	func();							// fuction은 프로그램 전체에서 유지되는 함수이므로, code segment에 할당(저장)됨
//	printf("func2: %p\n", func2);	// func2는 프로그램 전체에서 유지되는 함수이므로, 주소가 스택에 할당됨
//	printf("local b: %p\n", &b);	// b는 일반 변수이므로, 주소가 스택에 할당됨
//	printf("static c: %p\n", &c);	// c는 static 변수이므로, 프로그램 전체에서 유지됨
//	printf("const d: %p\n", &d);	// d는 const 변수이므로, 주소가 스택에 할당됨
//	printf("array arr: %p\n", arr);	// arr은 배열이므로, 주소가 스택에 할당됨
//	printf("global a: %p\n", &a);	// a는 global 변수이므로, 주소가 데이터 영역에 할당됨
//	printf("global c: %p\n", &c);	// c는 global 변수이므로, 주소가 데이터 영역에 할당됨
//
//	return 0;
//}
//
///* 
//	data segment: stack(지역변수, 매개변수), heap(사용자), data(전역, static, 문자열 리터럴 등)
//	code segment: 함수 하나당 한개 할당
//*/