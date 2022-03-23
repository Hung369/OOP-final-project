#include"Hourly Convertor.h"

shared_ptr<Person> HourlyConvertor::getObject(string first, string second, string third) {
	auto pos = third.find_first_of(' ');
	string money = third.substr(0, pos);
	string time = third.substr(pos + 1, third.size() - pos - 1);

	regex moneypattern("HourlyPayment=\\d+\\$");
	regex timepattern("TotalHours=\\d+");
	int pay = 0, timo = 0;

	if (regex_match(money, moneypattern)) {
		auto equal = money.find_first_of('=');
		auto dollar = money.find_first_of('$');
		string variable = money.substr(equal + 1, dollar - equal - 1);
		pay = stoi(variable);
	}

	if (regex_match(time, timepattern)) {
		auto equal = time.find_first_of('=');
		timo = stoi(time.substr(equal + 1, time.size() - equal - 1));
	}

	return make_shared<HourlyEmployee>(second, first, pay, timo);
}