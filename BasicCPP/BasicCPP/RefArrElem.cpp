//참조자는 변수에 대해서만 선언 가능 int &ref=20; X
//미리 참조자 선언 및 참조의 대상 바꾸기 불가능 int &ref; X
//NULL 초기화 불가능 int &ref=NULL; X
#include <iostream>
using namespace std;


int main() {
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}