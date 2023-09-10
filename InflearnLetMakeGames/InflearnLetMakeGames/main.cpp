#include <iostream>

using namespace std;

int main() {
	//��� : ������ �ʴ� ��, ���� �� �� �����س����� �ٲ� �� ����.
	//����� ����� ���ÿ� ���� ������ �ξ�� �Ѵ�
	//16������ ���ڸ��� 4bit => 8�ڸ� 32bit
	const int iAttack = 0x00000001;		//	1
	const int iArmor = 0x00000002;		//	10
	const int iHP = 0x00000004;			//	100
	const int iMP = 0x00000008;			//	1000
	const int iCritical = 0x00000010;	//	10000

	// 001 | 100 = 00101 | 10000 = 10101
	//int�� 32��Ʈ�ϱ� 000000000000000000000000010101 �̷� ���
	int iBuf = iAttack | iHP | iCritical;

	// ������ ����� : �����ڸ� �ٿ��� ����� �� �ִ�
	// �Ʒ��� Ǯ� ���� iBuf = iBuf ^ iHP; ����ġ ���


	// 10101 & 00001 = 00001
	cout << "Attack : " << (iBuf & iAttack) << endl;

	// 10101 & 00010 = 00000
	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "iHP : " << (iBuf & iHP) << endl; // 10101 & 00100 = 00100
	cout << "iMP : " << (iBuf & iMP) << endl;
	cout << "iCritical : " << (iBuf & iCritical) << endl; //10000

	/*
	����Ʈ ������  : <<, >>
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

	// iNumber���� 187�� �� �ִ�. �� ���� 16��Ʈ �̵���Ű��
	//���� 16��Ʈ�� ���� ���� �ȴ�
	iNumber <<= 16;

	// ���� 16��Ʈ�� ä���
	iNumber |= iLow;

	cout << "High : " << (iNumber >> 16) << endl;
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	//���������� : ++, --
	iNumber = 10;

	//��ġ
	++iNumber;

	//��ġ
	iNumber++;

	cout << ++iNumber << endl;
	cout << iNumber++ << endl;
	cout << iNumber << endl;

	return 0;
}