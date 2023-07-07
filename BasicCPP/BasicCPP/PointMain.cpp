#include <iostream>
#include "Point.h"
using namespace std;

int main() {
	Point p;

	p.InitMembers(3, 4); // 1 ÀÌ»óÀÌ¸é °¡´É

	cout << "X ÁÂÇ¥: " << p.GetX() << endl; 
	cout << "Y ÁÂÇ¥: " << p.GetY() << endl;


	p.SetX(10);
	p.SetY(20);

	// ÁÂÇ¥ Ãâ·Â
	cout << "X ÁÂÇ¥: " << p.GetX() << endl;
	cout << "Y ÁÂÇ¥: " << p.GetY() << endl;

	return 0;
}