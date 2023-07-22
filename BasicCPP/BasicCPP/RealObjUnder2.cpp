//함수 포인터
//멤버함수는 메모리의 한 공간에 별도로 위치해서, 이를 모든 객체가 공유하는 형태

#include <iostream>
using namespace std;

typedef struct Data {
	int data;
	void (*ShowData)(Data*);
	void (*Add)(Data*, int);
}Data;

void ShowData(Data* THIS) { cout << "Data: " << THIS->data << endl; }
void Add(Data* THIS, int num) { THIS->data += num;}

int main() {
	Data obj1 = { 15, ShowData, Add };
	Data obj2 = { 7, ShowData, Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);
	return 0;
}