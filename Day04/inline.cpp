///*
//
//*/
//#include <iostream>
//// 메크로 함수 - 컴파일러가 아닌 전처리기(Preprocessor)가 처리
//#define ADD(a, b)	#a "+" #b
//#define PI			3.14
//#define MSG(x, y, z)	x ## y ## z
//
//int main()
//{
//	printf("ADD(a, b): %s\n", ADD(10, 20));
//	printf("MSG(x, y , z): %s\n", MSG("macro+", "operator+", "test"));
//	return 0;
//}