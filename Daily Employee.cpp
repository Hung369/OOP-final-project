#include"Daily Employee.h"

DailyEmployee::DailyEmployee(string fullname, string career, int pay, int day) 
	:Person(fullname, career, pay) {
	day_spent = day;
}

int DailyEmployee::Salary() {
	return day_spent * payment;
}

string DailyEmployee::ToString(){
	stringstream builder;
	builder << "Name: " << name << "\nJob: " << job
		<< "\nDaily Salary: " << payment << "$\nTotal Days: " << day_spent
		<< "\nTotal Salary: " << Salary() << "$" << endl << endl;
	return builder.str();
}