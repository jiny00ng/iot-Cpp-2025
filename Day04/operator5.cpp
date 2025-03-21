///*
//	전역함수 오버로딩 : operator(p1, p2)
//	1. public
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax, int ay): x(ax), y(ay){}
//	Point operator+(const Point& other) {			// 객체 + 객체 - 객체를 함수에 전달할 때 복사본을 만들지 않고 참조를 사용
//		return Point(x + other.x, y + other.y);
//	}
//	Point operator+(int n) {						// 객체 + 정수
//		return Point(x + n, y + n);			
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//// 전역 함수 방식의 연산자 오버로딩 (정수 + 객체)
//// 멤버 함수 방식으로는 정수 + 객체 연산을 처리할 수 없기 때문에 필요함.
//// 작고 자주 호출되는 함수에서 성능을 최적화하는 데 사용
//inline Point operator+(int n, const Point& other) {
//	return Point(n + other.x, n + other.y);
//}
//
//int main()
//{
//	Point a(10, 20);
//	Point b(20, 30);
//	Point c = a + b;
//	c.showPoint();
//
//	Point d = a + 100;
//	d.showPoint();
//
//	Point e = 200 + b;
//	e.showPoint();
//
//	return 0;
//}