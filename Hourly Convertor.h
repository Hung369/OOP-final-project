#pragma once

#include"Person Convertor.h"

class HourlyConvertor :public PersonConvertor {
	shared_ptr<Person> getObject(string, string, string);
};