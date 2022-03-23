#pragma once

#include"Person.h"

class Manager :public Person {
private:
	int total_staff;
	int salary_per_staff;

public:
	Manager(string, string, int, int, int);
	int Salary();
	string ToString();
};