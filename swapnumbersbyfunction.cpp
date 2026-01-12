
#include <iostream>
#include <string>
using namespace std;



void SwapNumbersFunctionin(int &Num1,int &Num2)

{	

	int TempNum;

	TempNum= Num1;
	Num1 = Num2;
	Num2 = TempNum;
	

}

int main() {
	int Num1;
	int Num2;

	cin >> Num1;
	cin >> Num2;

	SwapNumbersFunctionin(Num1, Num2); 
		cout << Num1 << " " << Num2;

		
		//cout << "After swapping: " << Num1 << " " << Num2 << endl;
}		

