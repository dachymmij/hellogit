#ifndef CARS_H
#define CARS_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cars{
public:
Cars(string name,int plate){
	carName=name;
	plateNum=plate;
	}
	
string getName(){
	return carName;
};
int getPlate(){
	return plateNum;
};	
private:
	string carName;
	int plateNum;
	
};
#endif
