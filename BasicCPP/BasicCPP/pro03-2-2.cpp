// ���ڿ� ������ ���ο� �����ϴ� Printer Ŭ���� �������غ���
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Printer {
private:
	char word[100];
public:
	void SetString(const char* st) {
		strcpy(word, st);
	}
	void ShowString() {
		cout << word << endl;
	}
};


int main() {
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}