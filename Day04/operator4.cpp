///*
//    오버로딩 할 수 없는 연산자
//    ::, ., *, sizeof
//*/
//#include <iostream>
//
//class MyClass {
//private:
//    int x, y;
//public:
//    MyClass(int n1, int n2) : x(n1), y(n2) {}
//
//    MyClass operator+(const MyClass& other) {
//        std::cout << "+ overloading\n";
//        return MyClass(x + other.x, y + other.y);
//    }
//
//    MyClass add(const MyClass& other) {
//        std::cout << "add()\n";
//        return MyClass(x + other.x, y + other.y);
//    }
//
//    MyClass operator+(int value) const {
//        std::cout << "+ overloading (MyClass + int)\n";
//        return MyClass(x + value, y + value);
//    }
//   
//    void showMyClass() {
//        std::cout << "x: " << x << ", y: " << y << std::endl;
//    }
//};
//
//int main()
//{
//    MyClass obj(10, 20);
//    MyClass obj2(20, 30);
//
//    MyClass obj3 = obj.add(obj2);
//    MyClass obj4 = obj.operator+(obj3);
//    MyClass obj5 = obj4 + 100;
//
//    obj3.showMyClass();
//    obj4.showMyClass();
//    obj5.showMyClass();
//
//    return 0;
//}
