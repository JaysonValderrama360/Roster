//C867 Scripting and Programming	
//Roster PA
//Jayson Valderrama
//Student ID 001081738 

#pragma once
#ifndef ROSTER_H
#define ROSTER_H

#include "Student.h"
#include <array>

class Roster {
public:
	Roster();

	virtual ~Roster(); 

	void printAll();

	void add(string studID, string fiName, string laName, string emAddr, int a, int day0, int day1, int day2, Degree);

	void remove(string studentID);

	void printByDegree(string degree);
	
	void printnumDays(string);

	void printBadEmails();

	int addIndex = 0;

private:

	// Declaring array of pointers
	Student *classRosterArray[5];
};

#endif //ROSTER_H
