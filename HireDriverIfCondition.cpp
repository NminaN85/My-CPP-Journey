#include <iostream>
#include <string>
using namespace std;


struct stDrivers
{
    int Age;
    bool HasLicense;
};

void ReadDriverInfo(stDrivers& Info)
{
    cout << "Enter Age  : " << endl;
    cin>>Info.Age;
    cout << "HAs Driving License (1=yes/0=no) : " << endl;
    cin >> Info.HasLicense;
}

void IsEligable(stDrivers Info)
{
    if (Info.Age >= 21 && Info.HasLicense)
        cout << "You are Hired"<<endl;
    else
        cout<<"Sorry , you are not eligable";
}

int main()
{
    stDrivers Driver;
    ReadDriverInfo(Driver);
    IsEligable(Driver);
}
