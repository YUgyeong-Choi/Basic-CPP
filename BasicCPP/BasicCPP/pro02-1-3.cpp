#include <iostream>
using namespace std;

void SwapPointer(int *(&a), int *(&b)) { //3. (&a)�� ������ �����ε� �ּҸ� ����Ű�� ������ *�� �߰�
	int* temp = a; //4. ���⼭�� �ּҳ��� �ְ� �޴� ��
	a = b;
	b = temp;
}

int main() {
	int num1 = 5;
	int* ptr1 = &num1; //1. ptr�� &num1�� ��
	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << ' ' << *ptr2 << endl;

	SwapPointer(ptr1, ptr2); //2. ��� �ּҸ� ���ڷ� �����ִ� ��

	cout << *ptr1 << ' ' << *ptr2 << endl;

	return 0;
}

