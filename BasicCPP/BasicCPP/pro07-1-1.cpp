#include <iostream>
using namespace std;

class Car { //���ָ�
private:
	int gasolineGauge;
public:
	Car(int n):gasolineGauge(n){}
	int GetGasGauge() {
		return gasolineGauge;
	}
};

class HybridCar : public Car { //���ָ�, ����
private:
	int electricGauge;
public:
	HybridCar(int gas, int ele):Car(gas), electricGauge(ele){}

	int GetElecGauge() {
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar { //���ָ�, ����, ��
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int ele, int wat):HybridCar(gas, ele), waterGauge(wat){}
	void ShowCurrentGauge() {
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	}
};



int main() {
	HybridWaterCar hwCar(10, 20, 30);
	hwCar.ShowCurrentGauge();
	return 0;
}