#pragma once
#include "Person.h"
using namespace std;

class CoWorker :
	public Person
{
public:
	string workAddress;

	string GetCoWorker()
	{
		string person = GetPerson();
		cout << "Enter Work Address" << endl;
		cin >> workAddress;

		return person + " " + workAddress;
	}
};

