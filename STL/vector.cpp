///*
//	vector.size(): 원소 크기(갯수)를 반환
//	vector.begin(): 첫번째 주소 값을 반환
//	vector.end(): 마지막 다음 주소 값을 반환
//*/
//#include <iostream>
//#include <vector>		// vector 헤더파일 포함
//using namespace std;
//
//int main() 
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2(5);
//	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };
//	
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//	
//	for (int i = 0; i < 5; i++) {
//		printf("v[%d]: %d", i, v2[i]);
//	}
//	cout << endl;
//	for (auto i : v3) {					// 범위기반 for문 - 인덱스사용이 불가
//		//cout << v3[3] << endl;
//		cout << i << endl;
//	}
//
//	/* begin()과 end()는 interator(반복자) 타입을 반환. (= 포인터) */
//	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl;		// 간접 참조해서 데이터 값 읽어옴
//	cout << "v3의 마지막 요소값: " << *(v3.end() - 1) << endl;	// end() 반환 값은 마지막 요소 다음 값을 반환함
//
//
//	return 0;
//}