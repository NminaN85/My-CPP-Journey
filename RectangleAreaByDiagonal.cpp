
#include <iostream>
#include <string>
#include <cmath>
using namespace std;



double RectangleArea(double a,double d)

{	
	double part2 = sqrt(pow(d,2)-pow(a,2));

	return a * part2;

}

int main() {
	
	double a;
	double d;

	cout << " a = " << endl;
	cin >> a;
	cout << " d = " << endl;
	cin >> d;


	double area = RectangleArea(a, d);
	cout << " the Rectangle Area = " << area << endl;

}		

