#pragma once

#include"Person.h"

class DailyEmployee : public Person {
private:
	int day_spent;
public:
	DailyEmployee(string, string, int, int);
	int Salary();
	string ToString();
};