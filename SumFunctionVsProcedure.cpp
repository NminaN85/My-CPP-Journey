#include <iostream>
#include <string>
using namespace std;


void MySumProcedure()
{
	int Num1;
	int Num2;

	cout << "Please enter Num1 : " << endl;
	cin >> Num1;
	cout << "Please enter Num2 : " << endl;
	cin >> Num2;

	cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

}

int MySumFunction()
{

	int Number1;
	int Number2;
	cout << "Please enter Number1 : " << endl;
	cin >> Number1;
	cout << "Please enter Number2 : " << endl;
	cin >> Number2;
	
	
	return Number1 + Number2;

}

int main() {

		cout << MySumFunction()<<endl;
		MySumProcedure();

}		
