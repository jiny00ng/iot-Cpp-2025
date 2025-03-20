/*
*/
#include <iostream>

class Point {
public:
	int x, y;

	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		printf("constructor call!\n");
	}
    Point(const Point& other) {
        printf("copy constructor call!\n");
        x = other.x;
        y = other.y;
    }
	const Point& add(const Point& other) {
		printf("add() call!\n");
		return Point(x + other.x, y + other.y);
	}
    void showPoint() {
        printf("x: %d, y: %d\n", x, y);
    }
    
};
int main()
{
    // (10, 20) 좌표를 갖는 Point 객체 obj 생성
    Point obj(10, 20);
    //obj.showPoint();  // 현재 obj의 좌표 (10, 20) 출력

    // (30, 40) 좌표를 갖는 Point 객체 obj2 생성
    Point obj2(30, 40);
    //obj2.showPoint();  // 현재 obj2의 좌표 (30, 40) 출력

    Point obj3;
    obj3 = obj.add(obj2);

    // obj3의 최종 좌표 출력 (x: 40, y: 60)
    obj3.showPoint();
	return 0;
}