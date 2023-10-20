#include <iostream>
#include "HWID.h"
using namespace std;

int cpuInfo()
{
	return 0;
}

int main()
{
	int key;
	cls();
	cout << "[1] HWID" << endl; cout << "[2] CPU infos" << endl; cout << "[3] exit" << endl;
	cout << "key: ";
	cin >> key;
	switch (key)
	{
		case 1:
			hwidInfo();
		case 2:
			cpuInfo();
		case 3:
			exit(0);
		default:
			cls();
			cout << "Please enter a vaild number!" << endl;
			system("timeout 2");
			main();
	}
}