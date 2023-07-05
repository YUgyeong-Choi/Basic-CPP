//SwapByRef2(23,45); 오류가 발생하는 이유	
#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main() {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	//SwapByRef2(23,45); 참조자는 변수에 대해서만 선언이 가능하기 때문에
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}