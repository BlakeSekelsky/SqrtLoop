//sqrtloop.cpp
//Author: Blake Sekelsky
//Finds perfect square roots up to a user defined number.

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int maxSqrt;

	cout << "Input number to loop to: ";
	cin >> maxSqrt;
	
	int sqrts[(int)sqrt(maxSqrt)+1];	
	
	int numofSqrt = 0;
	for (int x = 0; x <= maxSqrt; x++){
		if (((int)sqrt(x) * (int)sqrt(x)) == x){
			sqrts[numofSqrt] = x;
			numofSqrt++;			
		}
	}
	
	for (int y = 0; y < numofSqrt-1; y++){
		if (y == numofSqrt){
			cout << sqrts[y];
		}
		else{
			cout << sqrts[y] << " ";
		}
	}
}
