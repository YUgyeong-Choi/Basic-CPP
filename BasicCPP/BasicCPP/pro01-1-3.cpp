//숫자 하나를 입력 받아 구구단을 출력하는 프로그램
#include <iostream>

int main() {
	int num;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << ": " << num * i << std::endl;
	}
	return 0;
}
