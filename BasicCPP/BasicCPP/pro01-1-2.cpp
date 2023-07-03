//이름과 전화번호를 문자열의 형태로 입력 받아서 출력하는 프로그램
#include <iostream>

int main() {
	char name[100];
	char number[100];

	std::cout << "이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "전화번호를 입력하세요: ";
	std::cin >> number;

	std::cout << "이름: " << name << " 전화번호: " << number;

	return 0;
}