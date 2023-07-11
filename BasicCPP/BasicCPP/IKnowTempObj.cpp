//임시 객체의 생성 및 소멸 알아보기
//임시객체는 다음 행으로 넘어가면 바로  소멸되어 버린다
//참조자에 참조되는 임시객체는 바로 소멸되지 않는다
#include <iostream>
using namespace std;

class Temporary {
private:
	int num;
public:
	Temporary(int n) : num(n){
		cout << "create obj: " << num << endl;
	}
	~Temporary() {
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo() {
		cout << "My num is " << num << endl;
	}
};

int main() {
	Temporary(100);
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	cout << "********** end of main" << endl << endl;
	return 0;
}