#include <string>
#include <iostream>
#include "student.h"
using namespace std;

// function definitions 
void student::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string student::fullName()
{
    string temp;

    temp.append(firstName);
    temp.append(" ");
    temp.append(lastName);
    return temp;
}
