#include"Manager.h"

Manager::Manager(string fullname, string career, int fixed_pay, int numbers, int salpernum)
	:Person(fullname, career, fixed_pay) {
	total_staff = numbers;
	salary_per_staff = salpernum;
}

int Manager::Salary() {
	return payment + total_staff * salary_per_staff;
}

string Manager::ToString() {
	stringstream builder;
	builder << "Name: " << name << "\nJob: " << job
		<< "\nFixed payment: " << payment << "$\nTotalEmployees: " << total_staff
		<< "\nPayment per employee: " << salary_per_staff
		<< "$\nTotalSalary: " << Salary() << "$" << endl << endl;
	return builder.str();
}