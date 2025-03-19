///*
//	문자열 처리하기
//*/
//#define _CRT_SECURE_NO_WARNINGS	// strcpy 같은 함수 사용 시 보안 경고 방지 (Visual Studio용)
//#include <iostream>
//#include <cstring>  // strcpy_s, strcpy를 사용하기 위해 추가
//#include <string>   // std::string 사용 가능
//
//using namespace std;
//
//int main()
//{
//	char str[20] = "홍길동";
//	cout << str << endl;
//
//	char str2[20];
//	// str2 = "김영희"; // 배열이름(배열의 첫번째 주소 이름)에 문자열 대입 X
//	strcpy_s(str2, "김영희");
//	cout << str2 << endl;
//
//	//char* str3 = nullptr;
//	char str3[100];
//	cout << "이름입력 > ";
//	cin.getline(str3, sizeof(str3));  // 공백을 포함한 문자열 입력 받기
//	cout << str3 << endl;
//
//	// 포인터 초기화 방식
//	const char* name = "김철수";		// 읽기 전용 const char*을 선언할 때는 초기화해야 함
//	cout << name << endl;
//
//	return 0;
//}