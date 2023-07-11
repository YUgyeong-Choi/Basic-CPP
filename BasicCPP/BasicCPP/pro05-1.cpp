#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos) {
		switch (pos) {
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
		}
	}
}

class NameCard {
private:
	char* name;
	char* company;
	char* number;
	int position;
public:
	NameCard(const char* pname, const char* pcompany, const char* pnumber, int pos) :position(pos) {
		name = new char[strlen(pname) + 1];
		company = new char[strlen(pcompany) + 1];
		number = new char[strlen(pnumber) + 1];
		strcpy(name, pname);
		strcpy(company, pcompany);
		strcpy(number, pnumber);
	}

	NameCard(const NameCard& copy) : position(copy.position) {
		name = new char[strlen(copy.name) + 1];
		company = new char[strlen(copy.company) + 1];
		number = new char[strlen(copy.number) + 1]; 
		strcpy(name, copy.name);
		strcpy(company, copy.company);
		strcpy(number, copy.number);
	}

	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << number << endl;
		cout << "����: ";
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
};


int main() {

	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGeedComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}