#include <iostream>
#include <string>
using namespace std;


int main()
{
    int Factorial = 1;

    for (int i = 6; i >= 1; i-=1) {
        Factorial *=  i;
          cout << i << endl;
    }
 cout << "Factorial = " << Factorial << endl;

}
