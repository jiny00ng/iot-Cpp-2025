//#include <iostream>
//
//int main()
//{
//	int size;
//	int* arr;			// 포인터 변수 선언
//	int* arr2;
//
//	std::cout << "배열의 크기를 입력하세요: ";
//	std::cin >> size;	// 사용자로부터 배열 크기 입력 받음
//
//	arr = new int;		// heap영역에 int형 변수 하나를 동적 할당
//	arr = new int[size];	// heap영역에 int형 배열을 동적 할당
//
//	delete arr;		// delete는 동적 할당한 메모리를 해제하는 함수
//	delete[] arr;	// 동적 할당한 메모리 해제
//
//	return 0;
//}