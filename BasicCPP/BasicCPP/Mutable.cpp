//const 함수 내에서의 값의 변경을 예외적으로 허용
//제한적으로, 매우 예외적인 경우 사용
#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	mutable int num2;
public:
	SoSimple(int n1, int n2):num1(n1), num2(n2){}
	void ShowSimpleData() const {
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const {
		num2 = num1;
	}
};


int main() {
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}