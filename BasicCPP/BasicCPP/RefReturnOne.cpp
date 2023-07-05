//참조자를 이용한 Call by Reference는 값의 변경이 일어나는지 확인해야 하기 때문에 const 키워드를 이용하여 단점을 극복한다 void HappyFunc(const int &ref)
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); 

	num1++;
	num2++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}