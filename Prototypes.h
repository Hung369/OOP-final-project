#pragma once

#include"Daily Convertor.h"
#include"Hourly Convertor.h"
#include"Product Convertor.h"
#include"Manager Convertor.h"

class PersonPrototypes {
	static shared_ptr<PersonPrototypes> var;
	map<string, shared_ptr<PersonConvertor>> factory;
	PersonPrototypes();
public:
	static shared_ptr<PersonPrototypes> instance();
	shared_ptr<Person> getInfo(string, string, string);
};