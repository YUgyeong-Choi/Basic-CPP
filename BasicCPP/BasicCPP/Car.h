//ifndef 헤더 파일이 겹치는 것을 막기 위한 매크로
#ifndef __CAR_H_
#define __CAR_H_

namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car {
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif