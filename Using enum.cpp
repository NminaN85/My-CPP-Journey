#include <iostream>
#include <string>
using namespace std;


	enum enCondition{New,Used};
	
	struct stCar
	{
		string brand;
		int model ;
		enCondition condition;
	};
	
	int main()
	{
		stCar Car1;
		Car1.brand = "Toyota";
		Car1.model = 2023;
		Car1.condition = enCondition::New;
		
	
		
		
		stCar Car2;
		Car2.brand = "Honda";
		Car2.model = 2018;
		Car2.condition = enCondition::Used;
	
	
	
	cout<<Car1.brand<<" "<<Car1.model<<endl;
	
	if(Car1.condition== enCondition::New){
		cout<<" status : New " <<endl;
	}else {
				cout<<" status : used " <<endl;
	}
	
	cout<<Car2.brand<<" "<<Car2.model<<endl;
	endl;
	
	if(Car2.condition== enCondition::New){
		cout<<" status : New " <<endl;
	}else {
				cout<<" status : used " <<endl;
	}

	
	
    return 0;
	
}
