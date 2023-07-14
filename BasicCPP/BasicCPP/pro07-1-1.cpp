#include <iostream>
using namespace std;

class Car { //가솔린
private:
	int gasolineGauge;
public:
	Car(int n):gasolineGauge(n){}
	int GetGasGauge() {
		return gasolineGauge;
	}
};

class HybridCar : public Car { //가솔린, 전기
private:
	int electricGauge;
public:
	HybridCar(int gas, int ele):Car(gas), electricGauge(ele){}

	int GetElecGauge() {
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar { //가솔린, 전기, 물
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int ele, int wat):HybridCar(gas, ele), waterGauge(wat){}
	void ShowCurrentGauge() {
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};



int main() {
	HybridWaterCar hwCar(10, 20, 30);
	hwCar.ShowCurrentGauge();
	return 0;
}