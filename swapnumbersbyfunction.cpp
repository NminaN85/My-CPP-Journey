
#include <iostream>
#include <string>
using namespace std;

void SwapNumbersFunctionin(int& Num1, int& Num2)
{
	int TempNum;
	TempNum = Num1;
	Num1 = Num2;
	Num2 = TempNum;
}

int main() {
	int Num1;
	int Num2;
	cout << "Please enter Num1 " << endl;
	cin >> Num1;
	cout << "Please enter Num2 " << endl;
	cin >> Num2;


	cout << "Before swapping: Num1 = " << Num1 << " Num2 = " << Num2 << endl;
	
	SwapNumbersFunctionin(Num1, Num2);
	cout << "After swapping: Num1 =  " << Num1 << " Num2 = " << Num2 << endl;
}

