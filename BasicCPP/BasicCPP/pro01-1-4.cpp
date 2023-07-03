//판매원에게 매달 50만원의 기본 급여와 판매 가격의 12%에 해당하는 돈을 지급하는 프로그램
#include <iostream>

int main() {
	int money;
	int salary;

	while (true) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> money;
		if (money == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
		salary = 50 + money * 0.12;
		std::cout << "이번 달 급여: " << salary << "만원" << std::endl;
	}

	return 0;
}