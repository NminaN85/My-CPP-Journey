#include <iostream>
#include <string>
using namespace std;

//struct stGrades {
//	float Grades[3];
//};

void ReadStudentGrade(float Grades[3]) {
	cout << "Please enter Grade 1" << endl;
	cin >> Grades[0];
	cout << "Please enter Grade 2" << endl;
	cin >> Grades[1];
	cout << "Please enter Grade 3" << endl;
	cin >>Grades[2];
}

void PrintStudentGrade(float Grades[3]) {

	cout << "Grade 1 " << Grades[0] << endl;
	cout << "Grade 2 " << Grades[1] << endl;
	cout << "Grade 3 " << Grades[2] << endl;
	cout << "******************************************" << endl << endl;
}

float calculateAverage(float Grades[3]) {

	float Average = (Grades[0] + Grades[1] + Grades[2]) / 3;
	 cout << " Average Grade is : " << Average << endl;
	 return Average;
}
int main() {

	float Grades[3];
	ReadStudentGrade(Grades);
	PrintStudentGrade(Grades);
	calculateAverage(Grades);
}
