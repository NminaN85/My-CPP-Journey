
#include <iostream>
#include <string>
using namespace std;



void PrintName(string Name)

{	
	cout << "hello  "<<Name << endl;


}

int main() {

	string Name;
	cout << "Please enter your name ";
		getline(cin, Name);

		PrintName(Name);

}		

