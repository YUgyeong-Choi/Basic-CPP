// #include : ��������� ���⿡ ���Խ�Ű�� ���, ��ó����
#include <iostream>

using namespace std;

//���� ���� : ������ -> ���� -> ����
//Ctrl + Shift + B �� �̿��ؼ� ������ �� ���� ����

int main() {
	//C++�� ǥ�� ����� ��κ��� std��� namespace �ȿ� �����ϰ� �ִ�.
	//�̸��� ��ġ�� ���� �������ֱ� ����
	std::cout << "Test Output" << std::endl;

	cout << "std namespace ���" << endl;

	/*
	���� : ���ϴ� ��
	������ �ֱ����ü-�޸�-���� ������ ������ ����� ��
	char, bool, short, int, float, double
	����, �뷮, ������, ǥ�� ����, unsigned
	*/

	int Number = 10;
	Number = 20;
	cout << Number << endl;

	bool bTest = true;
	bTest = false;
	cout << bTest << endl;

	//�����̳� ���ڴ� 1byte�� �����Ѵ�.
	//������ �ѱ�, �ѹ����� ���ڴ� 2byte�� �����ϱ� ������ char�� �����ϱ� �����
	char cTest = 't';
	cout << cTest << endl;

	float fNumber = 3.14;
	cout << fNumber << endl;

	double dNumber = 123.4567;
	cout << dNumber << endl;

	return 0;
}
