#include <iostream>

using namespace std;

int main() {
	//상수 : 변하지 않는 수, 값을 한 번 지정해놓으면 바꿀 수 없다.
	//상수는 선언과 동시에 값을 지정해 두어야 한다
	//16진수는 한자리가 4bit => 8자리 32bit
	const int iAttack = 0x00000001;		//	1
	const int iArmor = 0x00000002;		//	10
	const int iHP = 0x00000004;			//	100
	const int iMP = 0x00000008;			//	1000
	const int iCritical = 0x00000010;	//	10000

	// 001 | 100 = 00101 | 10000 = 10101
	//int는 32비트니까 000000000000000000000000010101 이런 모양
	int iBuf = iAttack | iHP | iCritical;

	// 연산자 축약헝 : 연산자를 줄여서 사용할 수 있다
	// 아래를 풀어서 쓰면 iBuf = iBuf ^ iHP; 스위치 기능


	// 10101 & 00001 = 00001
	cout << "Attack : " << (iBuf & iAttack) << endl;

	// 10101 & 00010 = 00000
	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "iHP : " << (iBuf & iHP) << endl; // 10101 & 00100 = 00100
	cout << "iMP : " << (iBuf & iMP) << endl;
	cout << "iCritical : " << (iBuf & iCritical) << endl; //10000

	/*
	쉬프트 연산자  : <<, >>
	20 << 2 = 80
	20 << 3 = 160
	20 << 4 = 320 ?
	1010000
	10100000 128 + 32 = 160

	20 >> 2 = 5
	101
	20 >> 3 = 2
	10
	*/

	int iHigh = 187;
	int iLow = 13560;

	int iNumber = iHigh;

	// iNumber에는 187이 들어가 있다. 이 값을 16비트 이동시키면
	//상위 16비트에 값이 들어가게 된다
	iNumber <<= 16;

	// 하위 16비트를 채운다
	iNumber |= iLow;

	cout << "High : " << (iNumber >> 16) << endl;
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	//증감연산자 : ++, --
	iNumber = 10;

	//전치
	++iNumber;

	//후치
	iNumber++;

	cout << ++iNumber << endl;
	cout << iNumber++ << endl;
	cout << iNumber << endl;

	return 0;
}