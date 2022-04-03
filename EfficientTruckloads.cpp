#include<iostream>
#include <string>
#include "EfficientTruckLoads.h"
#include <vector>

using namespace std;

vector<vector<int>> EfficientTruckloads::stored (20000,vector<int>(20000,0));

	EfficientTruckloads::EfficientTruckloads()
	{}
	
	int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
	{

		int nc = numCrates;
		int ls = loadSize;
		int cnum1 = nc/2;
		int cnum2 = nc/2; 

		if (nc%2 != 0)
		{
			cnum2 = cnum2 +1; 
		}

		if (stored.at(numCrates).at(loadSize)!=0)
		{
			return stored.at(numCrates).at(loadSize);
		}
		else if (numCrates<=loadSize)
		{
			stored.at(numCrates).at(loadSize) =1;
			return 1; 
		}
		else if(nc <=ls)
		{
			return 1; 
		}
		stored.at(numCrates).at(loadSize) = numTrucks(cnum1,ls) + numTrucks(cnum2,ls);
		return numTrucks(cnum1,ls) + numTrucks(cnum2,ls);

	}