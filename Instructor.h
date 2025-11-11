#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include "Instructor.h"
using namespace std;
class instructor{
private:
string department;
int experienceYears;

public:
void display();
void setdepartment();
void getdepartment();
void getexperienceYears();
void setexperienceYears();
Student(string name,int id);
Student();
};











#endif
