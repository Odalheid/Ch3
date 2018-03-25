// 4_p_111.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int val1 = 0;
	int val2 = 0;
	cout << "Please enter 2 values:\n";
	while (cin >> val1 >> val2)
	{	
		if (val1 < val2) cout << "The largest: " << val2 << ", the least: " << val1 << '\n';
		else cout << "The largest: " << val1 << ", the least: " << val2 << '\n';
		cout << "a + b = " << val1 + val2 << '\n';
		if (val1 < val2) cout << "b - a = " << val2 - val1 << '\n';
		else cout << "a - b = " << val1 - val2 << '\n';
		cout << "a * b = " << val1*val2;
		if (val1 != 0 && val2 != 0) cout << "; a / b = " << val1 / val2 << "; b / a = " << val2 / val1 << '\n';
		else cout << "; no division.\n";
		cout << "\nPlease enter 2 values:\n";
	}
	system("pause>>void");
    return 0;
}

