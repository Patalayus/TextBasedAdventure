#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char str[100];
	double age;

	cout << "A long time has passed since the last war." << endl;
	cout << "Many people have forgotten about how devistating it was..." << endl;
	cout << "You we're only a child when the first war happened, but what was your name?";
	cin >> str;

	cout << "Ah " << str << ", what a nice name." << endl;
	cout << "And how old are you now?" << endl;
	cin >> age;
	if (age >= 0 && age <= 12) {
		cout << "Ah, you are still a child then" << endl;
	}
	else if (age > 12 && age < 20) {
		cout << "You're a teenager at this point." << endl;
	}
	else if (age >= 20 && age < 60) {
		cout << "You are now an adult then" << endl;
	}
	else if (age >= 60 && age < 123) {
		cout << "You are very old then..." << endl;
	}
	else {
		cout << "That is not possible." << endl;
	}
	return 0;
}

