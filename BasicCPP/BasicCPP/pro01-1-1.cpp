//사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램
#include <iostream>

int main() {
	int sum = 0;
	int num;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> num;
		sum += num;
	}

	std::cout << "합계: " << sum;
	return 0;
}