//�̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ� ����ϴ� ���α׷�
#include <iostream>

int main() {
	char name[100];
	char number[100];

	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	std::cin >> number;

	std::cout << "�̸�: " << name << " ��ȭ��ȣ: " << number;

	return 0;
}