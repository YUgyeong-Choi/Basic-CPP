//에러 발생 코드
#include <iostream>
using namespace std;

class Base {
private:
	int num1;
protected:
	int num2;
public:
	int num3;
	Base():num1(1), num2(2), num3(3){}
};

class Derived : protected Base{};

int main() {
	Derived drv;
	cout << drv.num3 << endl; //외부에서는 접근 불가능
	return 0;
}