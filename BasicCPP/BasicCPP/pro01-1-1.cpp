//����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷�
#include <iostream>

int main() {
	int sum = 0;
	int num;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "��° ���� �Է�: ";
		std::cin >> num;
		sum += num;
	}

	std::cout << "�հ�: " << sum;
	return 0;
}