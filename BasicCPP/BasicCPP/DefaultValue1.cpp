#include <iostream>

int Adder(int num1 = 1, int num2 = 2) {
	return num1 + num2;
}

int main() {
	std::cout << Adder() << std::endl; //1, 2로 간주
	std::cout << Adder(5) << std::endl; //5, 2로 간주
	std::cout << Adder(3, 5) << std::endl; //3, 5로 간주
	return 0;
}