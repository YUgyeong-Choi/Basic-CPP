//啊惑 惑加
#include <iostream>
using namespace std;

class Base {
public:
	Base() { cout << "Base Constructor" << endl; }
	void SimpleFunc() { cout << "BaseOne" << endl; }
};

class MiddleDerivedOne :virtual public Base {
public:
	MiddleDerivedOne() :Base() {
		cout << "MiddleDerivedOne Constructor" << endl;
	}
	void MiddleFuncOne() {
		SimpleFunc();
		cout << "MiddleDrivedOne" << endl;
	}
};

class MiddleDerivedTwo :virtual public Base {
public:
	MiddleDerivedTwo() :Base() {
		cout << "MiddleDerivedTwo Constructor" << endl;
	}
	void  MiddleFuncTwo() {
		SimpleFunc();
		cout << "MiddleDerivedTwo" << endl;
	}
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo {
public:
	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo() {
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc() {
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();
	}
};

int main() {
	cout << "按眉积己 傈 ...." << endl;
	LastDerived ldr;
	cout << "按眉积己 饶 ...." << endl;
	ldr.ComplexFunc();
	return 0;
}