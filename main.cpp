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

person :: person(){
this->name=name;
this->id=id;
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

student :: person(){
this->yearLevel = yearLevel;
this->major = major;
}





// ==================== Instructor Class Implementation ====================






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

course : course(){
this->coursename=coursename;
this->currentstudents=currentstudents;

}




// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
