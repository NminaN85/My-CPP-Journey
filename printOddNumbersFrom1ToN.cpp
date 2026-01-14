#include <iostream>
using namespace std;


int main()
{
	int N = 10;
	int counter = 1;
	int sum = 0;

	while (counter <= N ) {

		cout << "N : "<<counter << endl;
		sum = counter + sum;
		counter += 2;
	}
	cout << " Sum of Odd Numbers = "<<sum << endl;
	
}
