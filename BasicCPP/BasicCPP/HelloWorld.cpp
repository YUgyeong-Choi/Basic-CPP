#include <iostream>

int main() {
	//별도의 출력 포맷을 지정하지 않아도 데이터의 성격에 따라 적절한 출력이 이루어짐
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}