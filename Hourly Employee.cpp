#include"Hourly Employeeh.h"

HourlyEmployee::HourlyEmployee(string fullname, string career, int pay, int hours)
	: Person(fullname, career, pay) {
	worked_hour = hours;
}

int HourlyEmployee::Salary() {
	return worked_hour * payment;
}

string HourlyEmployee::ToString() {
	stringstream builder;
	builder << "Name: " << name << "\nJob: " << job
		<< "\nHourly Salary: " << payment << "$\nTotal Hours: " << worked_hour
		<< "\nTotal Salary: " << Salary() << "$" << endl << endl;
	return builder.str();
}