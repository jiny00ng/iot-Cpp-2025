///*
//	기본 클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
//	- 상속관계에서 안전하게 형변환을 지원. 업캐스팅
//	다운캐스팅인 경우 다형성을 위해 virtual 메서드가 꼭 있어야 함
//*/
//#include <iostream>
//
//class Super {
//public:
//	int n1, n2;
//};
//class Sub : public Super {
//public:
//	int n3, n4;
//};
//class Sub2 : public Sub {
//public:
//	int n5, n6;
//};
//int main()
//{
//	Super* sp;
//	Sub* sup;
//	Sub2* sup2;
//	Sub2 obj{};
//
//	sup2 = dynamic_cast<Sub2*>(&obj);
//	sup = dynamic_cast<Sub*>(sup2);						// upcasting: 자식 타입 포인터를 부모 타입 포인터로 변환
//	sp = dynamic_cast<Super*>(sup2);					// upcasting
//
//	return 0;
//}