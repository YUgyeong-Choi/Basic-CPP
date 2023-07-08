#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int x1, const int y1, const int x2, const int y2):upLeft(x1,y1), lowRight(x2,y2) {
	//멤버 이니셜라이저  추가
}

void Rectangle::ShowRecInfo() const {
	cout << "좌 상단: " << "[" << upLeft.GetX() << ", " << upLeft.GetY() << ']' << endl;
	cout << "우 상단: " << "[" << lowRight.GetX() << ", " << lowRight.GetY() << ']' << endl;
}