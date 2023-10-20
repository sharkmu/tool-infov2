#include <iostream>
using namespace std;

int hwidInfo()
{
	return 0;
}

int cpuInfo()
{
	return 0;
}

int main()
{
	int key;
	system("cls");
	cout << "[1] HWID" << endl; cout << "[2] CPU infos" << endl; cout << "[3] exit" << endl;
	cout << "key: ";
	cin >> key;
	cout << key;
	switch (key)
	{
		case 1:
			hwidInfo();
		case 2:
			cpuInfo();
		case 3:
			exit(0);
		default:
			system("cls");
			cout << "Please enter a vaild number!" << endl;
			system("timeout 2");
	}
}