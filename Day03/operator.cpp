///*
//    연산자 오버로딩(다중정의)
//    - Point 클래스에서 `add` 함수를 사용하여 두 좌표(Point 객체)를 더하는 기능 구현
//*/
//
//#include <iostream> // 표준 입출력 기능 사용을 위한 헤더 파일
//
//// Point 클래스 정의
//class Point {
//public:
//    int x, y;  // x, y 좌표값을 저장하는 멤버 변수
//
//    /*
//        생성자(Constructor)
//        - 기본값 (0,0)으로 초기화되며, 값을 전달하면 해당 값으로 초기화됨
//        - 생성자가 호출될 때 "constructor call!" 메시지가 출력됨
//    */
//    Point(int ax = 0, int ay = 0) : x{ ax }, y(ay) {
//        printf("constructor call!\n");
//    }
//
//    /*
//        showPoint 함수
//        - 현재 Point 객체의 x, y 좌표를 출력하는 함수
//    */
//    void showPoint() {
//        printf("x: %d, y: %d\n", x, y);
//    }
//
//    /*
//        add 함수 (두 Point 객체의 좌표 합을 계산)
//        - 다른 Point 객체를 매개변수로 받아, x와 y 값을 각각 더한 새로운 Point 객체를 반환
//        - 기존 객체(this)의 x, y 값과 매개변수로 전달된 other 객체의 x, y 값을 더함
//        - 새로운 Point 객체를 반환하므로 원본 객체의 값은 변경되지 않음
//    */
//    Point add(const Point& other) {
//        printf("add() call!\n");
//        return Point(x + other.x, y + other.y);
//    }
//};
//
//// 프로그램 실행의 시작점 (main 함수)
//int main() {
//    // (10, 20) 좌표를 갖는 Point 객체 obj 생성
//    Point obj(10, 20);
//    obj.showPoint();  // 현재 obj의 좌표 (10, 20) 출력
//
//    // (30, 40) 좌표를 갖는 Point 객체 obj2 생성
//    Point obj2(30, 40);
//    obj2.showPoint();  // 현재 obj2의 좌표 (30, 40) 출력
//
//    // 기본 생성자를 사용하여 (0,0) 좌표를 갖는 obj3 객체 생성
//    Point obj3;
//
//    /*
//        obj3 = obj.add(obj2);
//        - obj의 add 함수를 호출하여 obj와 obj2의 좌표 값을 더함
//        - 즉, (10+30, 20+40) = (40, 60)
//        - add 함수는 새로운 Point 객체를 반환하므로, obj3에 (40, 60) 저장됨
//    */
//    obj3 = obj.add(obj2);
//
//    // obj3의 최종 좌표 출력 (x: 40, y: 60)
//    obj3.showPoint();
//
//    return 0; // 프로그램 종료
//}
