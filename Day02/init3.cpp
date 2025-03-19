/*
*/
#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }		// 디폴트 생성자
	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("현재 시간은 %d:%d:%d 입니다\n", m_hour, m_min, m_sec);
	}
};
int main()
{
	CTime now;
	now.showTime();
	
	//CTime t(15, 30, 30);

	return 0;
}