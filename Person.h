#pragma once

#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>
#include<map>
#include<memory>
#include<regex>
using namespace std;

class Person {
protected:
	string name;
	string job;
	int payment;
public:
	Person(string, string, int);
	virtual int Salary() = 0;
	virtual string ToString() = 0;
};