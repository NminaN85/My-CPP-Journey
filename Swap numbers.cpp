#include <iostream>
using namespace std;


int main()
{
   
	int Num1;
	int Num2;

	cout << "please enter first number :";
	cin >> Num1;
	cout << "please enter second number : ";
	cin >> Num2;

	cout << "the two numbers are " << Num1 << " and " << Num2 << endl;

	int TempNum;
	TempNum = Num1;
	Num1 = Num2;
	Num2 = TempNum;

	cout << "the two numbers SWAPPED are " << Num1 << " and " << Num2 << endl;
}
