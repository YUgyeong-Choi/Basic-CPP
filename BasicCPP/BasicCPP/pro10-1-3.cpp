//전역 함수 기반
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
	friend bool operator==(const Point& pos1, const Point& pos2); 
	friend bool operator!=(const Point& pos1, const Point& pos2);
};

bool operator==(const Point& pos1, const Point& pos2) {
	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos) {
		return true;
	}
	else {
		return false;
	}
}

bool operator!=(const Point& pos1, const Point& pos2) {
	return !(pos1 == pos2);
}

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	
	if (pos1 == pos2) {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	return 0;
}