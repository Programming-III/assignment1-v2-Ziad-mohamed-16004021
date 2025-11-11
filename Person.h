#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Person.h"
using namespace std;
class person{
private:
string name;
int id;

public:
void display();
void setname();
void getname();
void getid();
void setid();
Person(string name,int id);
Person();
};











#endif
