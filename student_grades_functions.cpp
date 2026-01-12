#include <iostream>
#include <string>
using namespace std;

struct stGrades {
	int Grades[3];
};

void ReadStudentGrade(stGrades& Grade) {
	cout << "Please enter Grade 1" << endl;
	cin >> Grade.Grades[0];
	cout << "Please enter Grade 2" << endl;
	cin >> Grade.Grades[1];
	cout << "Please enter Grade 3" << endl;
	cin >> Grade.Grades[2];
}

void PrintStudentGrade(stGrades Grade) {

	cout << "Grade 1 " << Grade.Grades[0] << endl;
	cout << "Grade 2 " << Grade.Grades[1] << endl;
	cout << "Grade 3 " << Grade.Grades[2] << endl;
	cout << "**************" << endl << endl;
}
float calculateAverage(stGrades Grade) {

	float Average = (Grade.Grades[0] + Grade.Grades[1] + Grade.Grades[2]) / 3;
	 return Average;
}
int main() {
	stGrades Student1;
	ReadStudentGrade(Student1);
	PrintStudentGrade(Student1);
  float Average = calculateAverage(Student1);
  cout << " Average Grade is : " << Average << endl;

	
}
