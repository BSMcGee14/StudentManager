#include <iostream>
#ifndef _STUDENT_H_
#define _STUDENT_H_
using namespace std;

class student 
{
    private:
    string firstName;
    string lastName;

    public:
    // prototype 
    void setName(string firstName, string lastName);
    void fullName();
};
#endif
