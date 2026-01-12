
#include <iostream>
#include <string>
using namespace std;


void DisplayCardInfo()
{
    string name;
    string age;
    string city;
    string country;

    cout << "Please enter your Name  " << endl;
    getline(cin, name);
    cout << "Please enter your Age  " << endl;
    getline(cin, age);
    cout << "Please enter your city  " << endl;
    getline(cin, city);
    cout << "Please enter your country  " << endl;
    getline(cin, country);

    cout << "***********************************" << endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "City : " << city << endl;
    cout << "Country : " << country << endl;
    cout << "***********************************" << endl;



}
void SquareStars()
{
    cout << "********" << endl;
    cout << "********" << endl;
    cout << "********" << endl;
    cout << "********" << endl;

}
void PlusLine()
{

    cout << "++++++++++++++++++++++++++++++++++++++++" << endl;;
}

void Information()
{
    cout << " I love Programming !" << endl;
    cout << " I promise to be the best developer ever !" << endl;
    cout << " I know that irt will take some time to practice but i will acheive my goal !" << endl;
    cout << " best regards !" << endl;
    cout << " Mina" << endl;


}

void DrowingHFunction()
{

    cout << "*   *" << endl << endl;
    cout << "*   *" << endl << endl;
    cout << "*****" << endl << endl;
    cout << "*   *" << endl << endl;
    cout << "*   *" << endl << endl;


}


int main()
{
    DisplayCardInfo();
    PlusLine();
    SquareStars();
    PlusLine();
    Information();
    PlusLine();
    DrowingHFunction();
}

