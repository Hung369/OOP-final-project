#pragma once

#include"Person.h"

class ProductEmployee :public Person {
private:
	int product;

public:
	ProductEmployee(string, string, int, int);
	int Salary();
	string ToString();
};