#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include<iostream>
#include <string>
#include <vector>



class EfficientTruckloads {

private:
	static std::vector<std::vector<int>> stored; 
public:
	EfficientTruckloads();
	int numTrucks(int numCrates, int loadSize);

};
#endif