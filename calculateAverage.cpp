#include <iostream>
#include <string>
using namespace std;

struct stMark
{
    int Mark1;
    int Mark2;
	int Mark3;
};

void ReadMark(stMark &Info)
{
    cout << "Enter Mark 1  : " << endl;
    cin>>Info.Mark1;
    cout << "Enter Mark 2  : " << endl;
    cin >> Info.Mark2;
    cout << "Enter Mark 3  : " << endl;
    cin >> Info.Mark3;
}

float AverageMarks(stMark Info)
{
    int Average = (Info.Mark1 + Info.Mark2 + Info.Mark3) / 3;
    return Average;
}
void IsPass(stMark Info)
{

    if (AverageMarks(Info) >= 50) 
    {
         cout << "Pass" << endl;
    }          
    else
    {
        cout << "Sorry , you Failed" << endl;
    }
}

int main()
{
    stMark Student;
    ReadMark(Student);

	cout << "your average Marks is : "<<AverageMarks(Student) << endl;
   
    IsPass(Student);
}
