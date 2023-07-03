#include <iostream>

int main() {
	//C++의 모든 컴파일러는 지역변수의 선언 위치에 제한을 두지 않는다
	int val1;
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;

}