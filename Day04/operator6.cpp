﻿/*
	전역함수 연산자 오버로딩
*/
#include <iostream>

class Complex {
private:
	double real, image;
public:
	Complex(double r = 0, double i = 0): real(r), image(i){}
	Complex add(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator*(int n) {
		return Complex(real * n, image * n);
	}
	void showComplex() {
		printf("real: %.1lf, image: %.1lf\n", real, image);
	}
	/* 함수 원형에 friend 선언을 하면 private 또는 protected 멤버의 접근 허용 */
	friend Complex operator*(int, const Complex& other);
	friend std::ostream& operator<<(std::ostream& out, const Complex& other);
};
inline Complex operator*(int n, const Complex& other) {
	return Complex(n * other.real, n * other.image);
}
// 출력 연산자 오버로딩
inline std::ostream& operator<<(std::ostream& out, const Complex& other) {
	out << other.real << ", " << other.image;
	return out;
}
int main()
{
	Complex c(1.1, 2.2);
	Complex c2(3.3, 4.4);
	Complex c3 = c + c2;
	c3.showComplex();
	
	Complex c4 = c * 100;
	c4.showComplex();

	Complex c5 = 100 * c3;
	c5.showComplex();

	// cout 객체를 통한 객체 출력
	std::cout << c << std::endl;				// 출력 연산자(<<)는 기본적으로 객체 출력 불가
	return 0;
}