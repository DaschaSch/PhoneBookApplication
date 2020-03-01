#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	string name;
	string surName;
	string phone;

	string GetPerson() 
	{
		cout << "Enter Name" << endl;
		cin >> name;
		cout << "Enter Sur Name" << endl;
		cin >> surName;
		cout << "Enter Phone" << endl;
		cin >> phone;
		return name + " " + surName + " " + phone;
	}

	void WriteToFile(string person) 
	{
		ofstream out;          // ����� ��� ������
		out.open("C:\\PhoneBook.txt", std::ios::app); // �������� ���� ��� ������
		if (out.is_open())
		{
			out << person << std::endl;
		}
	}

};

