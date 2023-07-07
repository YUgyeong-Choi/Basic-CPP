#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
private:
	int rad;
	Point center;
public:
	void Init(int x, int y, int r) {
		rad = r;
		center.Init(x, y);
	}

	void ShowCircleInfo() const {
		cout << "radius: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle one;
	Circle two;
public:
	void Init(int ox, int oy, int ora, int tx, int ty, int tra) {
		one.Init(ox, oy, ora);
		two.Init(tx, ty, tra);
	}

	void ShowRingInfo() const {
		cout << "Inner Circle Info..." << endl;
		one.ShowCircleInfo();
		cout << "Ouuter Circle Info..." << endl;
		two.ShowCircleInfo();
	}
};

int main() {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}