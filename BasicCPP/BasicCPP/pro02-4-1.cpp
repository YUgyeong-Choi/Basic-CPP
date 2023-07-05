#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[20] = "choiyu";
	char noname[20] = "";

	cout << strlen(name) << endl;
	
	strcat(name, "gyeong");
	cout << name << endl;
	
	strcpy(noname, name);
	cout << noname << endl;

	cout << strcmp(name, noname) << endl;

	return 0;
}