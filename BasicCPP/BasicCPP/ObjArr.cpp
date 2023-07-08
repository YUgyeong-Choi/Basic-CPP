//Sosimple * ptrArr = new SoSimple[10]; - 열 개의 SoSimple 객체가 모여서 배열을 구성하는 형태
//배열을 선언하는 경우에도 생성자는 호출되지만, 인자를 전달하지 못한다
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage) {
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << ", " << "나이: " << age << endl;
	}
	~Person() {
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person parr[3]; //called Person *3 출력
	char namestr[100];
	char* strptr;
	int age;
	int len;
	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();
	return 0;
}
