#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <string>
#include <vector>


int main()
{
	Reverse p1 = Reverse(); 
	int input0; 
	Reverse p2 = Reverse(); 
	std::string input1;
	Truckloads p3 = Truckloads();
	EfficientTruckloads p4 = EfficientTruckloads();
	int input2;
	int input3; 


	std::cin>> input0;
	std::cin>> input1;  
	std::cin>> input2; 
	std::cin>> input3; 


	std::cout << p1.reverseDigit(input0);
	
	std::cout << " "; 
	std::cout << p2.reverseString(input1);

	std::cout << " ";
	std::cout << p3.numTrucks(input2,input3);

	std::cout << " ";
	std::cout << p4.numTrucks(input2,input3) <<std::endl;


	return 0; 
	

}