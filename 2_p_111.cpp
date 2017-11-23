// 2_p_111.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const double km = 1.609;
	double miles = 0;
	cout << "Please enter miles:\n";
	while (cin >> miles)
	{	
		if (miles < 0) cout << "error\n";
		if (miles == 0) cout << miles << " miles equal " << 0 << " kilometres.\n";
		if (miles == 1) cout << miles << " mile equals " << km << " kilometres.\n";
		if (miles > 0 && miles != 1) cout << miles << " miles equal " << km*miles << " kilometres.\n";
		cout << "Please enter miles:\n";
	}
	return 0;
}