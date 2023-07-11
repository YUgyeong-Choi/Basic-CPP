//Call-by-value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우
#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n):num(n){}
	SoSimple(const SoSimple& copy) :num(copy.num) {
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData() {
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob) {
	ob.ShowData();
}

int main() {
	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수 호출 후" << endl;
	return 0;
}