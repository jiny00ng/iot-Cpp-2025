///*
//	reinterptet_cast
//	포인터->포인터, 포인터->변수, 변수->포인터 로 하는 주로 포인터 관련 연산자
//*/
// #include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);			// int* --> long
//	unsigned int ui = reinterpret_cast<int>(ip);	// int* --> uint
//	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);	// 동적 할당된 메모리 주소값 저장
//	
//	//int* p = reinterpret_cast<int*>(lg);			// long --> int*
//	int* p1 = reinterpret_cast<int*>(ui);			// x86bit에서 실행해야 함
//	printf("p: %d\n", *p1);
//
//	int* p = new int{ 100 };
//	char* pc = reinterpret_cast<char*>(p);
//	printf("c: %c\n", *pc);							// int* --> char*
//
//	//delete p;
//	p = reinterpret_cast<int*>(pc);					// char* --> int*
//	printf("p: %d\n", *p);
//
//	return 0;
//}