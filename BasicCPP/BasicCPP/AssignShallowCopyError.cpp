//디폴트 대입 연산자의 문제점
//1,Yoon ji yul을 가리키던 문자열의 주소 값을 잃어버림
//2. 얕은 복사로 인해 객체 소멸과정에서 지워진 문자열을 중복 소멸하는 문제 발생
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}