//�Ǹſ����� �Ŵ� 50������ �⺻ �޿��� �Ǹ� ������ 12%�� �ش��ϴ� ���� �����ϴ� ���α׷�
#include <iostream>

int main() {
	int money;
	int salary;

	while (true) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> money;
		if (money == -1) {
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}
		salary = 50 + money * 0.12;
		std::cout << "�̹� �� �޿�: " << salary << "����" << std::endl;
	}

	return 0;
}