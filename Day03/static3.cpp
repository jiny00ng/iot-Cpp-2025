///*
//	StaticTest 클래스를 만드는데 멤버 변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고 
//	3개 입력을 받는 생성자 작성. 회원번호는 자동으로 증가시킬 것이기 때문에
//	출력담당의 showmember() 메서드를 구현하시오. 
//*/
//#include <iostream>
//#include <cstring>
//
//class StaticTest {
//private:
//    char name[10];
//    char phone[20];
//    char addr[10];
//    static int cnt; // 회원번호 카운트 (정적 변수)
//
//public:
//    int member_id; // 개별 회원번호
//
//    // 생성자
//    StaticTest(const char* name, const char* phone, const char* addr) {
//        strcpy_s(this->name, name);
//        strcpy_s(this->phone, phone);
//        strcpy_s(this->addr, addr);
//        member_id = ++cnt; // 회원번호 증가
//    }
//
//    // 회원 정보 출력
//    void showmember() {
//        std::cout << "회원번호: " << member_id << std::endl;
//        std::cout << "이름: " << name << ", 전화번호: " << phone << ", 주소: " << addr << std::endl;
//    }
//};
//
///* 정적 변수 초기화 - 클래스의 모든 객체가 공유하는 변수
//   - 프로그램이 시작될 때 메모리에 할당되지만, 명시적으로 초기화하지 않으면 값이 정의되지 않음 */
//int StaticTest::cnt = 0;
//
//int main() {
//    StaticTest m1("홍길동", "010-1111-1234", "부산");
//    m1.showmember();
//
//    StaticTest m2("김영희", "010-2222-1234", "부산");
//    m2.showmember();
//
//    StaticTest m3("박철수", "010-3333-1234", "울산");
//    m3.showmember();
//
//    return 0;
//}
