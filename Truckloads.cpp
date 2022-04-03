#include "Truckloads.h"
#include <math.h>
#include <iostream>

Truckloads::Truckloads()
{}

int Truckloads::numTrucks(int numCrates, int loadSize)
{
	int cnum1 = numCrates/2;
	int remainder = numCrates%2;
	int cnum2 = 0; 

	if (remainder != 0 )
	{
		cnum2 = numCrates/2 + 1;
	} 
	else 
	{
		cnum2 = cnum1;
	}

	
	if (numCrates == 0 || loadSize == 0)
	{
		return 0; 
	}
	if (cnum2 <= loadSize && cnum1 <= loadSize)
	{
		return 2; 
	}
	if (cnum1 == loadSize)
	{
		return 3; 
	}

 
		return numTrucks(cnum1, loadSize) + numTrucks(cnum2,loadSize) ;
}