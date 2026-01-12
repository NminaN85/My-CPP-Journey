#include <iostream>
#include <string>
using namespace std;


	
	int main()
	{
		string string1;
		string string2;
		string string3;
		
		
		cout<<" please enter string 1"<<endl;
		getline(cin , string1);
		
		cout<<" please enter string 2"<<endl;
		cin>>string2;
		cout<<" please enter string 3 "<<endl;
		cin>>string3;
		
		cout<<"*****************************"<<endl<<endl;
		cout<<" the length of string 1 is : "<<string1.length()<<endl;
		cout<<" caracters at 0 , 2 , 4 , 7 are : "<<string1[0]<<" , "<<string1[2]<<" , " <<string1[4]<<" , " <<string1[7]<<endl;
		cout<<string2 + string3<<endl;
		cout<< stoi(string2) + stoi( string3)<<endl;
	

	
	
    return 0;
	
}
