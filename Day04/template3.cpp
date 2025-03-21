/*
	클래스 템플릿
*/

#include <iostream>

template <typename T>
class CTemplate {
private:
    T data;
public:
    CTemplate(T d) { data = d; }  // Fixed constructor name
    T getData() { return data; }
};

int main()
{
    CTemplate<int> obj(100);  // Using template with int
    printf("data: %d\n", obj.getData());

    CTemplate<std::string> obj2("클래스 템플릿 테스트");  // Using template with std::string
    std::cout << obj2.getData() << std::endl;

    return 0;
}
