//C867 Scripting and Programming	
//Roster PA
//Jayson Valderrama
//Student ID 001081738 


#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "Student.h"

class NetworkStudent : public Student {
public:
	NetworkStudent();

	NetworkStudent(string, string, string, string, int, int*, Degree);

	Degree getDegree();

	void print();


private:
	Degree degree;
};


#endif //NETWORKSTUDENT_H
