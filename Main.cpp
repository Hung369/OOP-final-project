#include"Prototypes.h"

void Display(vector<shared_ptr<Person>>arr);

int main() {
	ifstream reader;
	reader.open("November2021.txt", ios::in);
	vector<shared_ptr<Person>> arr;
	string first, second, third;
	auto obj = PersonPrototypes::instance();

	if (!reader.is_open()) {
		cerr << "Can't open this file.\n";
		return 0;
	}
	else {
		while (!reader.eof()) {
			getline(reader, first);
			getline(reader, second);
			getline(reader, third);
			arr.push_back(shared_ptr<Person>(obj->getInfo(first,second,third)));
			reader.ignore();
		}
	}
	Display(arr);
	return 0;
}

void Display(vector<shared_ptr<Person>>arr) {
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i]->ToString() << endl;
}