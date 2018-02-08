#include <iostream>
#include <vector>
#include "Cars.h"

using namespace std;

int main(){
	string carM;
	int plateN;
  
	//cout<<"Hello World";
	vector<Cars> garage;
	cout<<"Enter car name and number"<<endl;
	cout<<"Name: ";
	cin>>carM;
	cout<<"Number: ";
	cin>>plateN;
	
	Cars newGarage(carM,plateN);
	garage.push_back(newGarage);
	
	for (int i =0;i<garage.size();i++){
		cout<<garage[i].getName()<<"'s Number is "<<garage[i].getPlate()<<".\n";
	}
	return 0;
	
}
