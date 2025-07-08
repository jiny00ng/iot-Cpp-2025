#include <iostream>

void change_val(int& p) // &: 참조를 이용한 값 변경, &&: 임시객체를 이용한 값 변경 
{
	p = 20; // 포인터가 가리키는 주소의 값을 20으로 변경
}

int main()
{
	int num = 10;
	std::cout << num << std::endl; // C++에서 출력하는 방법
	change_val(num);			// num의 주소를 전달하여 값 변경 함수 호출
	std::cout << num << std::endl; // 변경된 값을 출력

	return 0;
}

/*
	int n;			// 일반 변수
	int* pn;		// 포인터 변수
	int& rn;		// 참조 변수(별칭, 별명)

	(lvalue: 변수 - 저장할 공간)int n = 10(rvalue: 상수, 변수);
	n = n2;
*/