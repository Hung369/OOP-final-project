#pragma once

#include"Person.h"

class HourlyEmployee: public Person {
private:
	int worked_hour;
	
public:
	HourlyEmployee(string, string, int, int);
	int Salary();
	string ToString();
};