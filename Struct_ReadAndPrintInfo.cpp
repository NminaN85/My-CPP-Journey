
#include <iostream>
#include <string>
using namespace std;



struct stInfo 
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadInfo(stInfo &Info)
{
	cout << "Please Enter Your First Name : \n";
	cin >> Info.FirstName;
	cout << "Please Enter Your Last Name : \n";
	cin >> Info.LastName;
	cout << "Please Enter Your Age : \n";
	cin >> Info.Age;
	cout << "Please Enter Your Phone : \n";
	cin >> Info.Phone;

}
void PrintInfo(stInfo Info)
{
	cout << "******************************************" << endl;;
	cout << "First Name :  " << Info.FirstName <<endl;
	cout << "Last Name :  " << Info.LastName << endl;
	cout << "Age :  " << Info.Age << endl;
	cout << "Phone :  " << Info.Phone << endl;
	cout << "******************************************" << endl;;

}

int main() {
	
	stInfo person1Info;
	ReadInfo(person1Info);
	PrintInfo(person1Info);

}

