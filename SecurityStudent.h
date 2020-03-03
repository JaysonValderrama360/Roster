//C867 Scripting and Programming	
//Roster PA
//Jayson Valderrama
//Student ID 001081738 

#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "Student.h"

class SecurityStudent : public Student {
public:
	SecurityStudent();

	SecurityStudent(string, string, string, string, int, int*, Degree);

	Degree getDegree();

	void print() override;
private:
	Degree degree;
};


#endif //SECURITYSTUDENT_H

