//���� �ϳ��� �Է� �޾� �������� ����ϴ� ���α׷�
#include <iostream>

int main() {
	int num;
	std::cout << "���ڸ� �Է��ϼ���: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << ": " << num * i << std::endl;
	}
	return 0;
}
