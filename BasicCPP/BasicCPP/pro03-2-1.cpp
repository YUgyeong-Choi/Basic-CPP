// °è»ê±â ±â´ÉÀÇ Å¬·¡½º¸¦ Á¤ÀÇÇØº¸ÀÚ
#include <iostream>
using namespace std;

class Calculator {
private:
	int AddCount;
	int MinCount;
	int MulCount;
	int DivCount;
public:
	void Init() {
		AddCount = 0;
		MinCount = 0;
		MulCount = 0;
		DivCount = 0;
	}
	double Add(double a, double b) {
		AddCount += 1;
		return a + b;
	}
	double Min(double a, double b) {
		MinCount += 1;
		return a - b;
	}
	double Mul(double a, double b) {
		MulCount += 1;
		return a * b;
	}
	double Div(double a, double b) {
		DivCount += 1;
		return a / b;
	}
	void ShowOpCount() {
		cout << "µ¡¼À: " << AddCount << " »¬¼À: " << MinCount << " °ö¼À: " << MulCount << " ³ª´°¼À: " << DivCount << endl;
	}
};


int main() {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 + 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 + 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 + 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}