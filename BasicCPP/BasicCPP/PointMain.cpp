#include <iostream>
#include "Point.h"
using namespace std;

int main() {
	Point p;

	p.InitMembers(3, 4); // 1 �̻��̸� ����

	cout << "X ��ǥ: " << p.GetX() << endl; 
	cout << "Y ��ǥ: " << p.GetY() << endl;


	p.SetX(10);
	p.SetY(20);

	// ��ǥ ���
	cout << "X ��ǥ: " << p.GetX() << endl;
	cout << "Y ��ǥ: " << p.GetY() << endl;

	return 0;
}