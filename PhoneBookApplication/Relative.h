#pragma once
#include "Person.h"
using namespace std;

class Relative :
	public Person
{
public:
	string homeAddress;

	string GetRelative()
	{
		string person = GetPerson();
		cout << "Enter Home Address" << endl;
		cin >> homeAddress;

		return person + " " + homeAddress;
	}
};

