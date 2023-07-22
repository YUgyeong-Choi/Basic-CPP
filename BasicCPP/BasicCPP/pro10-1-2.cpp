//멤버 함수 기반, 이왕이면 참조형으로 반환
#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	Point& operator+=(const Point& ref) {
		xpos += ref.xpos;
		ypos += ref.ypos;
		return *this;
	}
	Point& operator-=(const Point& ref) {
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return *this;
	}
};


int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = (pos1 += pos2);
	Point pos4 = (pos1 -= pos2);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}