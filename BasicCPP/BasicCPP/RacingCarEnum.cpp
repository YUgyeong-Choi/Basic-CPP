//enum안의 글들도 구조체 안에 포함시키는 것이 좋은데 부담스러우니 namespace를 이용해서 해당 파일 같이 사용
#include <iostream>
using namespace std;

namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car {
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState() {
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}
	void Accel() {
		if (fuelGauge <= 0) {
			return;
		}
		else {
			fuelGauge -= CAR_CONST::FUEL_STEP;
		}

		if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}
		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break() {
		if (curSpeed < CAR_CONST::BRK_STEP) {
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};


int main() {
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}