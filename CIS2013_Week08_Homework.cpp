#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	char cont = 'y';
	
	
	// Inputs/ prints ready numbers from the file
	ifstream game=game1.dat;
	cout << "Enter the file name , ex: game1.dat";
	cin >> game;
	
	game.open (game);
	if(game.fail()) {
		cout << "Something went wrong with " << game << endl;
		exit(1);
} else {
	cout << "Let's START!";
}
	
	int n = 100;
	char buffer1[10][10];
	
	game >> buffer1 [10][10];
	
	//trying to see if the program will print anything..
	cout << buffer1;
	
	// print empty field
	
	char numbers[10][10];

for(int x=0; x<10; x++) {
	for(int y=0; y<10; y++) {
		numbers[x][y] = '.';
	}
	
}
cout << endl << "		  0 1 2 3 4 5 6 7 8 9" << endl;
for(int x=0; x<10; x++) {
	cout << "		" <<x << " ";
	for(int y=0; y<10; y++) {
		cout << numbers [x] [y] << " ";
		
	}
	cout << endl;
}

// Create empty array for recording the player's moves

char buffer2 [10][10];

buffer2[0][0]=' ';
for(int i=0;i<10;i++) {
	
	for(int j=0; j<10; j++) {
		buffer2[i][j]=' ';
	}
		
}
// Ask the player to enter coordinates
int x, y;
cout << "Enter coordinates of the ship" << endl;
cin >> x >> y;

if(buffer1[x][y]=='x') {
	cout<< "HIT!";
	buffer2 [x][y]='X';
}
else {
	cout<< "MISS!";
	buffer2[x][y]= '0';
}
	// print updated field
	for(int i=0;i<10;i++) {
	
	for(int j=0; j<10; j++) {
		cout<< buffer2 [i][j]<< ' ';
	}
		
}
	
	return 0;
	}