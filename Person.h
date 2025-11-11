#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class person{
private:
string name;
int id;

public:
void addStudent(const Student& s);
void displayCourseInfo();
void setname();
void getname();
Person(string name,int id);
Person();
};











#endif
