
#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	float YearlySalary;
	char Gender;
	bool IsMarried;
};

void ReadInfo(stInfo &Info)
{
	cout << "Please Enter your Name : " << endl;
	cin>>Info.Name;
	cout << "Please Enter your Age : " << endl;
	cin >> Info.Age;
	cout << "Please Enter your City : " << endl;
	cin >> Info.City;
	cout << "Please Enter your Country : " << endl;
	cin >> Info.Country;
	cout << "Please Enter your Monthly Salery : " << endl;
	cin >> Info.MonthlySalary;
	cout << "Are you M / F : " << endl;
	cin >> Info.Gender;
	cout << "Are you Marrid? 1 for Married /0  for Single : " << endl;
	cin >> Info.IsMarried;

}

void PrintUserInfo(stInfo Info)
{
	cout << "**************************************" << endl<<endl;
	cout << "Name : " << Info.Name << endl;
	cout << " Age : " << Info.Age << endl;
	cout << " City : " << Info.City << endl;
	cout << " Country : " << Info.Country << endl;
	cout << " Monthly Salary  : " << Info.MonthlySalary << endl;
	cout << " Monthly Salary  : " << Info.MonthlySalary * 12 << endl;
	cout << " Genger   : ";
	if (Info.Gender == 'M' || Info.Gender == 'm') { cout << "Male" << endl; }
	else { cout << "Female" << endl; }
	cout << "Married : ";
	if (Info.IsMarried == 1) { cout << "Married" << endl; }else { cout << "Single" << endl; }
	cout <<endl<< "**************************************" << endl << endl;

}

int main() {
	stInfo Person1Info;
	ReadInfo(Person1Info);
	PrintUserInfo(Person1Info);	
}

