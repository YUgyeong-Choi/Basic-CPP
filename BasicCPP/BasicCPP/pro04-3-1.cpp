//이니셜라이저 로 위의 클래스를 초기화하고 초기화하는 느낌
#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x, int y): xpos(x), ypos(y){}
	void ShowPointInfo() const {
		cout << "[" << xpos << ', ' << ypos << "]" << endl;
	}
};

class Circle {
private:
	int rad;
	Point center;
public:
	Circle(int x, int y, int r) : center(x, y) {
		rad = r;
	}
	void ShowcircleInfo() const {
		cout << "radious: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle inCircle;
	Circle outCircle;
public:
	Ring(int inx, int iny, int inr, int outx, int outy, int outr):inCircle(inx, iny, inr),outCircle(outx, outy, outr){}
	void ShowRingInfo() const {
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowcircleInfo();
		cout << "Outer Circle Info..." << endl;
		outCircle.ShowcircleInfo();
	}
};


int main() {
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0; 
}