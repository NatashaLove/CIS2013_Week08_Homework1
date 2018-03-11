#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int number;
	int one, two, three, four, five;
	char cont = 'y';
	
	// Inputs/ prints ready numbers from the file
	ifstream in_a;
	
	in_a.open ("level1.dat");
	if(in_a.fail()) {
		cout << "Something went wrong with level1.dat";
		exit(1);
	}
	return 0;
	}