#include <windows.h>
#include <stdio.h>

using namespace std;

void cls() { cout << "\033[2J\033[1;1H"; }

int hwidInfo() {
	HW_PROFILE_INFO hwProfileInfo;

	if (GetCurrentHwProfile(&hwProfileInfo)) {
		wcout << L"Hardware GUID: " << hwProfileInfo.szHwProfileGuid;
	}
	else {
		cout << "Failed to get information";
	}

	return 0;
}