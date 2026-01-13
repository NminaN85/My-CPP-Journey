#include <iostream>
#include <string>
using namespace std;


int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        

        if (i % 2 != 0) {
          sum +=  i;
        }
    }
 cout << "Sum = " << sum << endl;


//Another solution 
// int sum = 0;

  //  for (int i = 1; i <= 10; i=i+2) {
    //      sum +=  i;
       //   cout << i << endl;
    
   // }
// cout << "Sum = " << sum << endl;

}
