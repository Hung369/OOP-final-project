#include"Prototypes.h"

shared_ptr<PersonPrototypes>PersonPrototypes::var = NULL;

PersonPrototypes::PersonPrototypes() {
	factory.insert({ "DailyEmployee", make_shared<DailyConvertor>() });
	factory.insert({ "HourlyEmployee", make_shared<HourlyConvertor>() });
	factory.insert({ "ProductEmployee", make_shared<ProductConvertor>() });
	factory.insert({ "Manager", make_shared<ManagerConvertor>() });
}

shared_ptr<PersonPrototypes> PersonPrototypes::instance() {
	if (var == NULL) {
		PersonPrototypes* temp = new PersonPrototypes();
		var = make_shared<PersonPrototypes>(*temp);
	}
	return var;
}

shared_ptr<Person> PersonPrototypes::getInfo(string first, string second, string third) {
	shared_ptr<Person> t = NULL;
	auto hint = factory[first];
	t = hint->getObject(first,second,third);
	return t;
}