#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class student{
private:
int yearLevel;
string major;

public:
void display();
void yearLevel();
void setyearLevel();
void getmajor();
void setmajor();
student();
student(int yearLevel, string major);
};













#endif
