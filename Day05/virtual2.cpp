﻿///*
//	virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며 이 순수 가상 함수를 가지는 클래스
//	추상클래스는 순수 가상함수 때문에 객체를 생성할 수 없다
//*/
//#include <iostream>
//class Cinterface {
//public:
//	Cinterface() { std::cout << "CInterface constructor" << std::endl; }
//	virtual void getData() const = 0;				// 순수 가상 함수
//};
//class CinSub : public Cinterface {
//public:
//	CinSub() { std::cout << "Cinterafce constructor" << std::endl; }
//	void getData() const override {
//		std::cout << "Pure Virtual function()" << std::endl;
//	}
//};
//int main()
//{
//	// Cinterface obj;
//	CinSub obj;
//	obj.getData();
//
//	return 0;
//}