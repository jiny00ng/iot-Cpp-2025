/*
	Inheritance(상속)
	private, public, protected
	is a(무엇은 무엇이다. 관계), has a(소유) 관계가 성립해야 함
*/
#include <iostream>
#include <string>
using namespace std;

// 부모 클래스: Human
class Human {
private:
    string name;  // 이름
    int age;      // 나이
public:
    Human(const string&, int);  // 생성자 선언
    void getData() const;       // 데이터 출력 함수 선언
};

// 자식 클래스: Student (Human 클래스를 상속받음)
class Student : public Human {
private:
    int studentID;  // 학번
public:
    Student(const string&, int, int);  // 생성자 선언
    void showStudent() const;          // 학번 출력 함수 선언
};

// Human 클래스의 생성자 정의 (클래스 외부에서 구현)
Human::Human(const string& aname, int aage) : name(aname), age(aage) {}

// Human 클래스의 getData() 함수 정의
void Human::getData() const {
    cout << "이름: " << name << ", 나이: " << age << endl;
}

// Student 클래스의 생성자 정의 (부모 클래스 생성자 호출)
Student::Student(const string& aname, int aage, int astudentID)
    : Human(aname, aage), studentID(astudentID) {
}

// Student 클래스의 showStudent() 함수 정의
void Student::showStudent() const {
    cout << "학번: " << studentID << endl;
}

// 메인 함수
int main() {
    // 부모 클래스 객체 생성
    Human h("홍길동", 25);
    h.getData();  // 이름과 나이 출력

    // 자식 클래스 객체 생성
    Student h2("임꺽정", 30, 202503);
    h2.getData();      // 부모 클래스에서 상속받은 getData() 실행
    h2.showStudent();  // 학번 출력

    return 0;
}

