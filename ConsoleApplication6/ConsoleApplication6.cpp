
#include "pch.h"
#include <windows.h>
#include <iostream>
#include "cstring"

using namespace std;

void A(char str[], char s[]);

void A(char str[], char s[])
{
	if (strstr(str, s))
		cout << "true" << endl;
	else
		cout << "false" << endl;
}

int main()
{
	char str[10];
	cout << "Input string: ";
	cin >> str;
	char s[10];
	cout << "Input string: ";
	cin >> s;
	A(str, s);
	system("pause");
	return 0;
}
