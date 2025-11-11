#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

void student :: display(){
        cout<<name<<cout<<id;
    }
void person :: getname(){
return name;
}

void person :: getid(){
return id;
}

person :: person(string name,int id){
this->name=name;
this->id=id;
}

person :: person(){
delete();
}





// ==================== Student Class Implementation ====================
void student :: display(){
  cout<<yearLevel<<major;
}
void student :: getyearLevel(){
return yearLevel;
}

void student :: getmajor{
return major;
}

student :: person(int yearLevel, string major){
this->yearLevel = yearLevel;
this->major = major;
}\
student :: student(){
delete();
}





// ==================== Instructor Class Implementation ====================

void Instrucotr:: display(){
cout<<department<<experienceYears;
}

void Instructor:: getdepartment(){
return department;
}

void Instructor:: getexperienceYears(){
return experienceYears;
}

Instructor::Instructor(string department, int experienceYears){
this->department = department;
this->experienceYears = experienceYears;
}

Instructor:: Instrutor(){
delete()
        }




// ==================== Course Class Implementation ====================

void course :: getcoursename(){
return coursename;
}

void course:: getcurrentstudents(){
return currentstudents;
}

void course :: getcoursecode(){
return coursecode;
}

void course:: getmaxstudents(){
return maxstudents;
}

course : course(string coursename, int currentstudents){
this->coursename=coursename;
this->currentstudents=currentstudents;

}

course:course(){
delete()
        }




// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
