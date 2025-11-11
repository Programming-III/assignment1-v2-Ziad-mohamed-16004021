#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class{
private:
string coursecode;
string coursename;
int maxstudents;
Student* students;
int currentstudents;

public:
void addStudent(const Student& s);
void displayCourseInfo();
void getcoursecode();
void setcoursecode();
void getmaxstudents();
void setmaxstudents();
void getcurrentstudents();
void setcurrentstudents();
void getcoursename();
void setcoursename();
};
















#endif
