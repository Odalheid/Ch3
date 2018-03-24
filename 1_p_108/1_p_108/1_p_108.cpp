// 1_p_108.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first_name;
	string friend_name;
	char friend_sex;
	int age;
	string adressee_name;
	string adressee_surname;
	while (true)
	{
		cout << "\nPls insert adressee name\n";
		cin >> first_name;
		cout << "\nPls insert another friend's name\n";
		cin >> friend_name;
		cout << "\nPls insert 'm' if your friend is a male, or 'f' if your friend is a female\n";
		cin >> friend_sex;
		cout << "\nPls insert your friend's age\n";
		cin >> age;
		
		cout << "\n\nDear " << first_name << ",\n\nHow are you? I'm quite well. I miss you a lot. Have you seen " << friend_name << " lately?";
		if (friend_sex == 'm') cout << " If you see " << friend_name << ", please ask him to call me.";
		if (friend_sex == 'f') cout << " If you see " << friend_name << ", please ask her to call me.";
		
		if (age > 0 && age < 110) { cout << " I hear you've just had your birthday and you're now " << age << " years old."; }
		if (age < 0 && age > 110) { cout << " About the age, you're joking!"; }
		
		if (age > 0 && age < 12) {cout << " Next year you'll be " << ++age << " years old.";}
		if (age == 18) {cout << " Next year you'll have the right to vote.";}
		if (age < 110 && age > 60) {cout << " I hope you aren't bored at your retirement.\n\n";}
		cout << "Yours sincerely,\n";
		cin >> adressee_name >> adressee_surname;
	}
    return 0;
}

