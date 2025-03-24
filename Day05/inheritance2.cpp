///*
//
//*/
//#include <iostream>  // 표준 입출력 라이브러리 포함
//#include <string>    // 문자열 처리를 위한 string 라이브러리 포함
//using namespace std; // std 네임스페이스 사용 선언 (cout, endl 등을 편리하게 사용하기 위함)
//
//// 부모 클래스: Human
//class Human {
//private:
//    string name;  // 이름 (문자열 타입)
//    int age;      // 나이
//public:
//    // 생성자(Constructor): 이름과 나이를 초기화하는 역할
//    Human(const string& name, int age) : name(name), age(age) {}
//
//    // 데이터를 출력하는 함수 (멤버 변수를 변경하지 않으므로 const 사용)
//    void getData() const {
//        cout << "이름: " << name << ", 나이: " << age << endl;
//    }
//};
//
//// 자식 클래스: Student (Human 클래스를 상속받음)
//class Student : public Human {
//private:
//    int studentID;  // 학번 (고유번호)
//public:
//    // Student 생성자: Human 부모 클래스의 생성자를 호출하고, studentID를 초기화
//    Student(const string& name, int age, int studentID)
//        : Human(name, age), studentID(studentID) {
//    }
//
//    // 학생 정보를 출력하는 함수 (멤버 변수를 변경하지 않으므로 const 사용)
//    void showStudent() const {
//        cout << "학번: " << studentID << endl;
//    }
//};
//
//// 메인 함수: 프로그램의 시작점
//int main() {
//    // 부모 클래스 객체 생성 (Human)
//    Human h("홍길동", 25);
//    h.getData();  // 이름과 나이를 출력
//
//    // 자식 클래스 객체 생성 (Student)
//    Student h2("임꺽정", 30, 202503);
//    h2.getData();      // 부모 클래스에서 상속받은 getData() 실행
//    h2.showStudent();  // 학번 출력
//
//    return 0;  // 프로그램 종료
//}
