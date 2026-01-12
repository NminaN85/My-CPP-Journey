#include <iostream>
#include <string>
using namespace std;



double RectangleArea(double a,double b)

{	

	return a * b;

}

int main() {
	
	double a;
	double b;

	cout << " a = " << endl;
	cin >> a;
	cout << " b = " << endl;
	cin >> b;


	double area = RectangleArea(a, b);
	cout << " the Rectangle Area = " << area << endl;

}		

