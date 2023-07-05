//참조형으로 반환되지만, 일반변수를 선언해서 반환 값을 저장할 수 있다
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref){
	ref++;
	return ref;
}

int main(){
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1 += 1;ㅍ
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}