#pragma once

#include"Person Convertor.h"

class DailyConvertor :public PersonConvertor {
	shared_ptr<Person> getObject(string,string,string);
};