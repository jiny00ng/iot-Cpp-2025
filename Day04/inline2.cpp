﻿///*
//	메크로는 전처리가 처리하지만 inline 함수는 컴파일러가 처리한다.
//*/
//#include <iostream>
//
//#define SQUARE(x) ((x)*(x))
//
//inline int funct(int x) {
//	return x * x;
//}
//int main()
//{
//	std::cout << SQUARE(2) << std::endl;
//	std::cout << funct(2) << std::endl;
//	return 0;
//}