#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL)); // rand�Լ��� srand�Լ��� ������, srand�� seed���� time(NULL)�� �־���� �����Ҷ����� ���� ���� �ٲ�
	for (int i = 0; i < 5; i++) {
		printf("Random Number: %d\n", rand() % 100);
	}
	return 0;
}