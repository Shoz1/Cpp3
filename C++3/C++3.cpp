#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char mas[12];
	cout << "Enter 12 symbols: " << endl;
	for (int i = 0; i < 12; i++)
	{
		cin >> mas[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (isdigit(mas[i]))
			mas[i] = '!';
	}
	for (int i = 0; i < 12; i++)
	{
		cout << mas[i] << " ";
	}
	return 0;
}

