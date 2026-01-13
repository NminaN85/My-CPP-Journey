#include <iostream>
#include <string>
using namespace std;



int main()
{
    float Num1;
    float Num2;
    char OperationType;

    cout << "Enter First Number " << endl;
    cin >> Num1;
    cout << "Enter Second Number " << endl;
    cin >> Num2;
    cout << "Enter Operation Type ( + or - or * or / )" << endl;
    cin >> OperationType ;



    switch (OperationType) {

    case '+':
        cout << Num1 + Num2 << endl;
        break;
    case '-':
        cout << Num1 - Num2 << endl;
        break;
    case '*':
        cout << Num1 * Num2 << endl;
        break;
    case '/':
        cout << Num1 / Num2 << endl;
        break;
    default :
        cout<< "wrong entry" << endl;
        
    }





    return 0;
}
