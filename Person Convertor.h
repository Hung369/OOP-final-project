#pragma once

#include"Person.h"
#include"Daily Employee.h"
#include"Hourly Employeeh.h"
#include"Manager.h"
#include"Product Employee.h"

class PersonConvertor {
public:
	virtual shared_ptr<Person> getObject(string,string,string) = 0;
};