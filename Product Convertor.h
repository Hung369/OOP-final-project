#pragma once

#include"Person Convertor.h"

class ProductConvertor : public PersonConvertor {
	shared_ptr<Person> getObject(string, string, string);
};