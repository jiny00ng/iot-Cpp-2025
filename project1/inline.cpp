//#include <iostream>
//using namespace std;	
//
//// inline 함수 예제
//// inline 함수는 함수 호출 시 오버헤드를 줄이기 위해 사용
//// 함수의 본문이 짧고 간단한 경우에 주로 사용되며, 컴파일러가 함수 호출을 해당 코드로 대체합니다.
//// 속도를 높이기 위해 사용되지만, 너무 많은 inline 함수 사용은 코드 크기를 증가시킬 수 있습니다.
//
//#define add(x) (x + x) // 매크로 함수 예제
//inline int func(int x)
//{
//	return x + x;	
//}
//
//int main()
//{
//	cout << func(2) << endl;
//	cout << add(2) << endl; // 매크로 함수 호출
//
//	return 0;
//}