//C867 Scripting and Programming	
//Roster PA
//Jayson Valderrama
//Student ID 001081738 

#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H


#include "Student.h"

class SoftwareStudent : public Student {
public:
	SoftwareStudent();

	SoftwareStudent(string, string, string, string, int, int*, Degree);

	Degree getDegree() override;

	void print() override;
private:
	Degree degree;
};


#endif //SOFTWARESTUDENT_H