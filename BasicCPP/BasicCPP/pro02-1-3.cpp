#include <iostream>
using namespace std;

void SwapPointer(int *(&a), int *(&b)) { //3. (&a)는 참조자 형태인데 주소를 가리키기 때문에 *을 추가
	int* temp = a; //4. 여기서는 주소끼리 주고 받는 중
	a = b;
	b = temp;
}

int main() {
	int num1 = 5;
	int* ptr1 = &num1; //1. ptr에 &num1이 들어감
	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << ' ' << *ptr2 << endl;

	SwapPointer(ptr1, ptr2); //2. 모두 주소를 인자로 보내주는 것

	cout << *ptr1 << ' ' << *ptr2 << endl;

	return 0;
}

