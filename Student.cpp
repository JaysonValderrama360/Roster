//C867 Scripting and Programming	
//Roster PA
//Jayson Valderrama
//Student ID 001081738 

#include <iostream>
#include "Student.h"
#include "Degree.h"
#include <string>
using namespace std;

// default constructor definition
Student::Student() 
{

}

Student::Student(string studID, string fiName, string laName, string emAddr, int a, int* nmDays)
{
	studentID = studID;
	firstName = fiName;
	lastName = laName;
	emailAddress = emAddr;
	age = a;
	numDays[0] = nmDays[0];
	numDays[1] = nmDays[1];
	numDays[2] = nmDays[2];
}

string Student::getFirstName() 
{
	return firstName;
}

void Student::setFirstName(string fiName)
{
	firstName = fiName;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setLastName(string laName)
{
	lastName = laName;
}

string Student::getEmailAddress()
{
	return emailAddress;
}
void Student::setEmailAddress(string emAddr)
{
	emailAddress = emAddr;
}

int Student::getAge()
{
	return age;
}

void Student::setAge(int a)
{
	age = a;
}

string Student::getStudentID() {
	return studentID;
}

void Student::setStudentID(string studentID) {
	Student::studentID = studentID;
}

int *Student::getNumDays() {
	return numDays;
}

void Student::setNumDays(int day0, int day1, int day2)
{
	Student::numDays[0] = day0;
	Student::numDays[1] = day1;
	Student::numDays[2] = day2;
}

void Student::setDegree(string degree)
{
	degree = degree;
}

//Student::Student() {}

Degree Student::getDegree() {
	return Degree::SOFTWARE;
}

 

 void Student::print() {}

// default deconstructor definition
Student::~Student()
{

}