//// 프로그래밍 => 데이터 가공!!!
//// 기본, 참조, 사용자 정의 자료형 - struct, class
//// 함수의 정의, 함수의 호출, 함수의 선언 
//#include <stdio.h>		// 표준 입출력 헤더 파일
//
//// 함수 선언
//void func();	
//void func1(char);
//int func2(int);	
//int func3();
//
//int main(int arg, char** argv) // main 함수 오버로딩
//{
//	int num = 10;
//	char ch = 'A';
//
//	func();		// 함수 호출
//	func1('a');	// 입력있는 함수 호출
//	func1(ch);
//	int res = func2(num);	// 리턴값(임시객체)를 res 변수에 저장
//	int res2 = func3();
//	res += 1;
//	
//	return 0;
//}
//
//void func()		// 함수 정의 - 함수 머리 : 출력함수 이름(입력)
//{
//	printf("Hello, World!\n");
//}
//
//void func1(char arg)	// 입력있는 함수
//{
//	printf("%c Hellos", arg);
//}
//
//int func2(int n)	// 입력, 출력 있는 함수
//{
//	return n * 2;	// 입력값을 2배로 반환
//}	
//
//int func3()		// 입력 없는 함수
//{
//	return 100;	// 100을 반환
//}