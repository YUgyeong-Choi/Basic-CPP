#include <iostream>
using namespace std;

void PlusValue(int& a) {
	a = a + 1;
}

void ChangePM(int& a) {
	a *= -1;
}

int main() {
	int num = 20;
	PlusValue(num);
	cout << num << endl;
	ChangePM(num);
	cout << num << endl;
	return 0;
}