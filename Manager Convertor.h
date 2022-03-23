#pragma once

#include"Person Convertor.h"

class ManagerConvertor :public PersonConvertor {
	shared_ptr<Person> getObject(string, string, string);
};