﻿///*
//	vector<int>::iterator iter은 순방향 반복자 선언.
//	이것을 생략하고 auto 선언해도 가능
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void main()
//{
//
//	vector<int> v = { 10, 20, 30, 40, 50 };
//	vector<int>::iterator it;
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	for (auto it = v.begin(); it < v.end(); it++) {
//		cout << *it << endl;
//	}
//}