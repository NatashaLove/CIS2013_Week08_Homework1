#include <iostream>
#include <fstream>

using namespace std;

int main () {
	//int number;
	//int one, two, three, four, five;
	char cont = 'y';
	
	// Inputs/ prints ready numbers from the file
	ifstream game;
	
	game.open ("game1.dat");
	if(game.fail()) {
		cout << "Something went wrong with game1.dat";
		exit(1);
	}
	int n = 100;
	char* buffer1[10][10];
	
	game.read(buffer1, n);
	cout << buffer1;
	
	
	return 0;
	}