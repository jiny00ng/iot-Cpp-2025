/*
    교제 p203
	Banking System Ver 0.2
	Account 클래서 정의, 객체 포인터 배열 적용
*/
#define _CRT_SECURE_NO_WARNINGS  // Visual Studio에서 'strcpy' 같은 함수의 보안 경고를 무시하도록 설정
#include <iostream>  // 표준 입출력을 위한 라이브러리
#include <cstring>   // 문자열 처리 함수들(cstrcpy, strlen 등)을 사용하기 위한 라이브러리

using namespace std;

const int NAME_LEN = 20;  // 고객 이름을 최대 20글자로 제한

// 함수 선언
void ShowMenu(void);        // 메뉴 출력 함수
void MakeAccount(void);     // 계좌 개설 함수
void DepositMoney(void);    // 입금 처리 함수
void WithdrawMoney(void);   // 출금 처리 함수
void ShowAllInfo(void);     // 전체 계좌 정보 출력 함수

// 메뉴 옵션을 위한 열거형 선언
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account {
private:
    int accID;        // 계좌 번호
    int balance;      // 계좌 잔액
    char* cusName;    // 고객 이름 (동적 메모리로 관리)

public:
    // 생성자: 계좌 정보 초기화 (ID, 잔액, 이름)
    Account(int ID, int money, const char* name)
        : accID(ID), balance(money)
    {
        cusName = new char[strlen(name) + 1];  // 고객 이름 길이에 맞게 메모리 동적 할당
        strcpy(cusName, name);  // 이름 복사
    }

    int GetAccID() { return accID; }  // 계좌 ID 반환

    // 입금 함수
    void Deposit(int money) {
        if (money <= 0) {  // 입금액이 0 이하일 경우 처리
            cout << "잘못된 입금액입니다.\n" << endl;
            return;
        }
        balance += money;  // 잔액에 입금액 추가
    }

    // 출금 함수
    int Withdraw(int money) {
        if (money <= 0) {  // 출금액이 0 이하일 경우 처리
            cout << "잘못된 출금액입니다.\n" << endl;
            return 0;
        }
        if (balance < money) {  // 잔액이 출금액보다 적을 경우 처리
            return 0;
        }
        balance -= money;  // 잔액에서 출금액 차감
        return money;  // 출금된 금액 반환
    }

    // 계좌 정보 출력
    void ShowAccInfo() const {
        cout << "----------------------\n";  // 구분선 출력
        cout << "계좌 ID: " << accID << endl;  // 계좌 ID 출력
        cout << "이름: " << cusName << endl;  // 고객 이름 출력
        cout << "잔액: " << balance << endl;  // 계좌 잔액 출력
        cout << "----------------------\n";  // 구분선 출력
    }

    // 소멸자: 동적 할당된 고객 이름 메모리 해제
    ~Account() {
        delete[] cusName;  // 동적으로 할당된 고객 이름 메모리 해제
    }
};

Account* accArr[100]; // 계좌 정보를 저장할 포인터 배열
int accNum = 0;       // 현재 저장된 계좌 수 (배열의 인덱스 역할)

int main(void) {
    int choice;  // 사용자의 메뉴 선택

    while (1) {  // 메뉴가 종료될 때까지 반복
        ShowMenu();  // 메뉴 출력
        cout << "선택: ";  // 메뉴 선택 요청
        cin >> choice;  // 사용자 입력 받기

        if (cin.fail()) {  // 입력값이 숫자가 아닐 경우 예외 처리
            cin.clear();  // 에러 상태 초기화
            cin.ignore(100, '\n');  // 버퍼에 남은 잘못된 입력 제거
            cout << "잘못된 입력입니다. 숫자(1~5)를 입력하세요.\n" << endl;
            continue;  // 다시 메뉴 출력
        }

        cout << endl;
        switch (choice) {  // 선택한 메뉴에 따라 분기
        case MAKE:
            MakeAccount();  // 계좌 개설
            break;
        case DEPOSIT:
            DepositMoney();  // 입금
            break;
        case WITHDRAW:
            WithdrawMoney();  // 출금
            break;
        case INQUIRE:
            ShowAllInfo();  // 계좌 정보 전체 출력
            break;
        case EXIT:
            for (int i = 0; i < accNum; i++)  // 저장된 모든 계좌 객체 삭제
                delete accArr[i];
            cout << "프로그램을 종료합니다.\n";  // 종료 메시지 출력
            return 0;  // 프로그램 종료
        default:
            cout << "잘못된 선택입니다. 다시 입력하세요.\n" << endl;  // 잘못된 메뉴 선택 시 안내
        }
    }
    return 0;  // 이 부분은 실제로 실행되지 않음
}

// 메뉴 출력 함수
void ShowMenu(void) {
    cout << "-----Menu-----" << endl;  // 메뉴 제목 출력
    cout << "1. 계좌개설" << endl;  // 계좌 개설 옵션
    cout << "2. 입금" << endl;  // 입금 옵션
    cout << "3. 출금" << endl;  // 출금 옵션
    cout << "4. 계좌정보 전체 출력" << endl;  // 계좌 정보 출력 옵션
    cout << "5. 프로그램 종료" << endl;  // 종료 옵션
}

// 계좌 개설 함수
void MakeAccount(void) {
    int id;  // 계좌 ID
    char name[NAME_LEN];  // 고객 이름
    int balance;  // 입금액

    cout << "[계좌 개설]" << endl;
    cout << "계좌 ID(정수 값): ";  // 계좌 ID 입력 요청
    cin >> id;

    if (cin.fail()) {  // 숫자가 아닌 값이 입력되면 예외 처리
        cin.clear();  // 입력 상태 초기화
        cin.ignore(100, '\n');  // 잘못된 입력을 버퍼에서 제거
        cout << "잘못된 입력입니다. 계좌 ID는 숫자(정수)로 입력하세요.\n" << endl;
        return;  // 함수 종료
    }

    // 중복 계좌 ID 확인
    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {  // 이미 존재하는 ID라면
            cout << "이미 존재하는 계좌 ID입니다.\n" << endl;
            return;  // 함수 종료
        }
    }

    cout << "이름: ";  // 이름 입력 요청
    cin >> name;  // 고객 이름 입력
    cout << "입금액: ";  // 입금액 입력 요청
    cin >> balance;  // 입금액 입력

    if (cin.fail() || balance < 0) {  // 잘못된 입금액 (음수 입력 방지)
        cin.clear();  // 입력 상태 초기화
        cin.ignore(100, '\n');  // 잘못된 입력을 버퍼에서 제거
        cout << "잘못된 입력입니다. 입금액은 0 이상이어야 합니다.\n" << endl;
        return;  // 함수 종료
    }

    // 계좌 생성 및 저장
    accArr[accNum++] = new Account(id, balance, name);  // 새로운 Account 객체 생성 후 배열에 저장
    cout << "계좌 개설 완료!\n" << endl;
}

// 입금 함수
void DepositMoney(void) {
    int money, id;  // 입금액과 계좌 ID

    cout << "[입금]" << endl;
    cout << "계좌 ID: ";  // 계좌 ID 입력 요청
    cin >> id;  // 계좌 ID 입력

    cout << "입금액: ";  // 입금액 입력 요청
    cin >> money;  // 입금액 입력

    for (int i = 0; i < accNum; i++) {  // 모든 계좌 확인
        if (accArr[i]->GetAccID() == id) {  // 입력한 ID와 일치하는 계좌 찾기
            accArr[i]->Deposit(money);  // 입금 처리
            cout << "입금 완료!\n" << endl;  // 입금 완료 메시지
            return;  // 함수 종료
        }
    }
    cout << "유효하지 않은 ID입니다.\n" << endl;  // 계좌 ID가 존재하지 않으면 오류 메시지 출력
}

// 출금 함수
void WithdrawMoney(void) {
    int money, id;  // 출금액과 계좌 ID

    cout << "[출금]" << endl;
    cout << "계좌 ID: ";  // 계좌 ID 입력 요청
    cin >> id;  // 계좌 ID 입력

    cout << "출금액: ";  // 출금액 입력 요청
    cin >> money;  // 출금액 입력

    for (int i = 0; i < accNum; i++) {  // 모든 계좌 확인
        if (accArr[i]->GetAccID() == id) {  // 입력한 ID와 일치하는 계좌 찾기
            if (accArr[i]->Withdraw(money) == 0) {  // 출금액이 잔액보다 많으면
                cout << "잔액 부족\n" << endl;  // 잔액 부족 메시지 출력
                return;  // 함수 종료
            }
            cout << "출금 완료!\n" << endl;  // 출금 완료 메시지 출력
            return;  // 함수 종료
        }
    }
    cout << "유효하지 않은 ID입니다.\n" << endl;  // 계좌 ID가 존재하지 않으면 오류 메시지 출력
}

// 모든 계좌 정보 출력 함수
void ShowAllInfo(void) {
    if (accNum == 0) {  // 등록된 계좌가 없으면
        cout << "등록된 계좌가 없습니다.\n" << endl;  // 계좌가 없다는 메시지 출력
        return;  // 함수 종료
    }

    for (int i = 0; i < accNum; i++) {  // 모든 계좌 정보 출력
        accArr[i]->ShowAccInfo();  // 계좌 정보 출력
        cout << endl;
    }
}