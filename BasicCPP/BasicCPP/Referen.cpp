//참조자는 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름이다
#include <iostream>
using namespace std;

int main() {
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	return 0;
}