#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class{
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public:
void addStudent(const Student& s);
void displayCourseInfo();
void getcourseCode();
void setcourseCode();
void getmaxStudents();
void setmaxStudents();
void getcurrentStudents();
void setcurrentStudents();
void getcourseName();
void setcoursname();
};
















#endif
