// PhoneBookApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Relative.h"
#include "CoWorker.h"

using namespace std;

int PersonType()
{
    Person p;
    Relative r;
    CoWorker cw;

    double num;
    cout << "Select entry type 1 - Relative, 2 - CoWorker, 3 - Other" << endl;
    cin >> num;
    if (num == 1) {
        string person = r.GetRelative();
        p.WriteToFile(person);
    }
    else if (num == 2) {
        string person = cw.GetCoWorker();
        p.WriteToFile(person);
    }
    else {
        string person = p.GetPerson();
        p.WriteToFile(person);
    }
    return 0;
}

int main()
{
    int addPerson;
    cout << "Add Person 1 - yes, 2 - No" << endl;
    cin >> addPerson;
    while (addPerson == 1)
    {
        PersonType();    
        cout << "Add one more Person 1 - yes, 2 - No" << endl;
        cin >> addPerson;
    }

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
