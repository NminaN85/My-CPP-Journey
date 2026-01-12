
#include <iostream>
#include <string>
using namespace std;

struct stPersonalInfo {
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadPersonalInfo(stPersonalInfo &Info)
{
	cout << "Please enter first name : " << endl;
	cin >> Info.FirstName;
	cout << "Please enter Last Name" << endl;
	cin >> Info.LastName;
	cout << "Please enter Age " << endl;
	cin >> Info.Age;
	cout << "Please enter Phone Number" << endl;
	cin >> Info.Phone;
}
void PrintPersonalInfo(stPersonalInfo Info) {
	cout << "******************************************"<<endl;
	cout << "First Name : " << Info.FirstName << endl;
	cout << "Last Name : " << Info.LastName << endl;
	cout << "Age : " << Info.Age << endl;
	cout << "Phone : " << Info.Phone << endl;
	cout << "******************************************"<<endl;
}
void ReadMorePersons(stPersonalInfo Persons[2])
{
	ReadPersonalInfo(Persons[0]);
	ReadPersonalInfo(Persons[1]);
}
void PrintMorePersons(stPersonalInfo Persons[2])
{
	cout << endl<< "*************************" << endl;

	PrintPersonalInfo(Persons[0]);
	PrintPersonalInfo(Persons[1]);
}


int main() {

	stPersonalInfo Persons[2];
	ReadMorePersons(Persons);
	PrintMorePersons(Persons);

}

