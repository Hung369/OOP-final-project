#include"Manager Convertor.h"

shared_ptr<Person> ManagerConvertor::getObject(string first, string second, string third) {
	auto pos1 = third.find_first_of(' ');
	auto pos2 = third.find_last_of(' ');

	string fixed_mon = third.substr(0, pos1);
	string number_em = third.substr(pos1 + 1, pos2 - pos1 - 1);
	string price_per_em = third.substr(pos2 + 1, third.size() - pos2 - 1);

	regex moneypattern("FixedPayment=\\d+\\$");
	regex employeepattern("TotalEmployees=\\d+");
	regex moneyperempattern("PaymentPerEmployee=\\d+\\$");
	int pay = 0, numbers = 0, salpernum = 0;

	if (regex_match(fixed_mon, moneypattern)) {
		auto equal = fixed_mon.find_first_of('=');
		auto dollar = fixed_mon.find_first_of('$');
		string variable = fixed_mon.substr(equal + 1, dollar - equal - 1);
		pay = stoi(variable);
	}

	if (regex_match(number_em, employeepattern)) {
		auto equal = number_em.find_first_of('=');
		string variable = number_em.substr(equal + 1, number_em.size() - equal - 1);
		numbers = stoi(variable);
	}

	if (regex_match(price_per_em, moneyperempattern)) {
		auto equal = price_per_em.find_first_of('=');
		auto dollar = price_per_em.find_first_of('$');
		string variable = price_per_em.substr(equal + 1, dollar - equal - 1);
		salpernum = stoi(variable);
	}

	return make_shared<Manager>(second, first, pay, numbers, salpernum);
}