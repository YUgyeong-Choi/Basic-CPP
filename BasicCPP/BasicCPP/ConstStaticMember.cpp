//Const static ���
#include <iostream>
using namespace std;

class CountryArea {
public:
	const static int Russia = 1707540;
	const static int Canada = 998467;
	const static int China = 957290;
	const static int South_Krea = 9922;
};

int main() {
	cout << "���þ� ����: " << CountryArea::Russia << "km" << endl;
	cout << "ĳ���� ����: " << CountryArea::Canada << "km" << endl;
	cout << "�߱� ����: " << CountryArea::China << "km" << endl;
	cout << "�ѱ� ����: " << CountryArea::South_Krea << "km" << endl;
	return 0;
}