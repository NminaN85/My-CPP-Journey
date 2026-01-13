#include <iostream>
#include <string>
using namespace std;


struct stMark
{
    int Mark;
};

void ReadMark(stMark &Info)
{
    cout << "Enter Mark  : " << endl;
    cin>>Info.Mark;
   
}

void IsPass(stMark Info)
{
    if (Info.Mark >= 50)
        cout << "Pass"<<endl;
    else
        cout<<"Sorry , you Failed";
}

int main()
{
    stMark Student;
    ReadMark(Student);
    IsPass(Student);
}
