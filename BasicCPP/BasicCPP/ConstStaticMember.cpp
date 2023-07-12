//Const static 멤버
#include <iostream>
using namespace std;

class CountryArea {
public:
	const static int Russia = 1707540;
	const static int Canada = 998467;
	const static int China = 957290;
	const static int South_Krea = 9922;
};

int main() {
	cout << "러시아 면적: " << CountryArea::Russia << "km" << endl;
	cout << "캐나다 면적: " << CountryArea::Canada << "km" << endl;
	cout << "중국 면적: " << CountryArea::China << "km" << endl;
	cout << "한국 면적: " << CountryArea::South_Krea << "km" << endl;
	return 0;
}