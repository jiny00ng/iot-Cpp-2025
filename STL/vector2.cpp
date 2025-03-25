///*
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	/*
//		v.size() : 저장된 요소 개수
//		v.capacity() : 벡터에 할당된 메모리 크기 리턴
//	*/ 
//	cout << "[v[i], v.size(), v.capcity() ]" << endl;
//	for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);
//		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << endl;
//	}
//	
//	vector<int> v2;
//	v2.push_back(10);		// 마지막 원소 뒤에 차례대로 요소값 추가
//	v2.push_back(11);
//	v2.push_back(12);
//	v2.push_back(13);
//	v2.insert(v2.begin(), 1);	// v.insert(idx, val) : idx번째 위치에 val 삽입
//	v2.insert(find(v2.begin(), v2.end(), 13), 20);		// 13이라는 요소를 찾아서 그 자리에 20 삽입
//
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	v2.pop_back();			// 마지막 원소 제거
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	return 0;
//}