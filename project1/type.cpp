//#include <stdio.h>
//#include <stdint.h>
//
//int main()
//{
//	unsigned char uch = 0x7f;		// 0b(2진수) 0111 1111
//	char ch = 0x7f;		// 0b(2진수) 0111 1111
//	unsigned char uch1 = 0x9f;	// 0b(2진수) 1001 1111
//	char ch1 = 0x9f;	// 0b(2진수) .... 1001 1111
//
//	printf("uch: %#x, ch: %#x\n", uch, ch);
//	printf("uch1: %#x, ch1: %#x\n", uch1, ch1);
//
//	unsigned char uch2 = 0x11f;	// 0b 1 0001 1111
//	char ch2 = 0x11f;	// 0x11f는 char 범위를 벗어남
//	printf("uch2: %#x, ch2: %#x\n", uch2, ch2);
//	
//	uch = uch << 2; 	// 0b(unsigned) 1111 1100
//	ch = ch << 2;		// 0b(signed) .... 1111 1100
//	printf("uch << 2: %#x, ch << 2: %#x\n", uch, ch);
//
//	uch1 = uch1 >> 1;	// 0b(unsigned) 0100 1111
//	ch1 = ch1 >> 1;		// 0b(signed) .... 1100 1111
//	printf("uch1 >> 1: %#x, ch1 >> 1: %#x\n", uch1, ch1);
//
//	return 0;
//}