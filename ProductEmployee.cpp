#include"Product Employee.h"

ProductEmployee::ProductEmployee(string fullname, string career, int pay, int quantity)
	:Person(fullname, career, pay) {
	product = quantity;
}

int ProductEmployee::Salary() {
	return payment * product;
}

string ProductEmployee::ToString() {
	stringstream builder;
	builder << "Name: " << name << "\nJob: " << job
		<< "\nPaymentPerProduct: " << payment << "$\nTotal Products: " << product
		<< "\nTotalSalary: " << Salary() << "$" << endl << endl;
	return builder.str();
}