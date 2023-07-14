#include <iostream>
using namespace std;

class Rectangle {
private:
	int a, b;
public:
	Rectangle(int num1,int num2):a(num1), b(num2){}
	void ShowAreaInfo() {
		cout << "¸éÀû: " << a * b << endl;
	}
};

class Square : public Rectangle {
public:
	Square(int a) : Rectangle(a, a){}
};

int main() {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}