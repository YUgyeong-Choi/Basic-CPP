//객체를 반환하되, 참조형으로 반환하지 않는 경우
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
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void ShowData() {
		cout << "num: " << num << endl;
	} 
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "return 이전" << endl;
	return ob;
}

int main() {
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
	obj.ShowData();
	return 0;
}