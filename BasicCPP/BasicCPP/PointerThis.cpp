//this는 객체 자신을 가리키는 용도로 사용되는 포인터
#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n) {
		cout << "num= " << num << ", " << " address= " << this << endl;
	}
	void ShowSimpleData() {
		cout << num << endl;
	}
	SoSimple* GetThisPointer() {
		return this; //객체 자신의 주소값
	}
};

int main() {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", "; 
	ptr1->ShowSimpleData();
	
	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}