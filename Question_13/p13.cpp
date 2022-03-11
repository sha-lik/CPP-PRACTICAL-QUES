/*
13. Create a class Student containing fields for Roll No., Name, Class, Year and Total
Marks. Write a program to store 5 objects of Student class in a file. Retrieve these records
from file and display them.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("Question_13_output.txt");

    for (int i = 0; i < 5; i++)
    {
        Student obj;

        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";

        cin >> obj.Class >> obj.Year >> obj.TotalMarks;
        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;

        cout << "\n---------------------------------\n";
    }

    return 0;
}