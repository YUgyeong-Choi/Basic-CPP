#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo {
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* sname, int num):age(num){
		name = new char[strlen(sname) + 1];
		strcpy(name, sname);
	}
	void ShowMyFriendInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~MyFriendInfo() {
		delete []name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* name, int age, const char* saddr, const char* sphone):MyFriendInfo(name, age) {
		addr = new char[strlen(saddr) + 1];
		phone = new char[strlen(sphone) + 1];
		strcpy(addr, saddr);
		strcpy(phone, sphone);
	}
	void ShowMyFirendDetailInfo() {
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
	~MyFriendDetailInfo() {
		delete []addr;
		delete []phone;
	}
};

int main() {
	MyFriendDetailInfo fren1("김진성", 22, "충남 아산", "010-1234-00xx");
	MyFriendDetailInfo fren2("이주성", 19, "경기 인천", "010-3333-00xx");
	fren1.ShowMyFirendDetailInfo();
	fren2.ShowMyFirendDetailInfo();
	return 0;
}