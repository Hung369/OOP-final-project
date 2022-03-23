#include"Product Convertor.h"

shared_ptr<Person> ProductConvertor::getObject(string first, string second, string third) {
	auto pos = third.find_first_of(' ');
	string money = third.substr(0, pos);
	string product = third.substr(pos + 1, third.size() - pos - 1);

	regex moneypattern("PaymentPerProduct=\\d+\\$");
	regex productpattern("TotalProducts=\\d+");
	int pay = 0, prod = 0;

	if (regex_match(money, moneypattern)) {
		auto equal = money.find_first_of('=');
		auto dollar = money.find_first_of('$');
		string variable = money.substr(equal + 1, dollar - equal - 1);
		pay = stoi(variable);
	}

	if (regex_match(product, productpattern)) {
		auto equal = product.find_first_of('=');
		string variable = product.substr(equal + 1, product.size() - equal - 1);
		prod = stoi(variable);
	}

	return make_shared<ProductEmployee>(second, first, pay, prod);
}