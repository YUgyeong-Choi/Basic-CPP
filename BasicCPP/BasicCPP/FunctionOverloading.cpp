//C++은 함수의 이름, 매개변수의 선언으로 함수를 호출한다. 반환형은 함수호출 시, 호출되는 함수를 구분하는 기준이 될 수 없다
#include <iostream>

void MyFunc(void) {
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c) {
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main() {
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}