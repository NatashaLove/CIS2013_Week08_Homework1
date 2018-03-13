#include <iostream>
#include <fstream>

using namespace std;

void new_game (int g);
void print (char field [10][10]);


int main () {
	
	char cont = 'y';
	
	
	// Inputs/ prints ready numbers from the file
	ifstream game;
	int l;
	
	new_game(l);
	
	char field [10][10];
	char* cell = (char*)field;
	
	char buffer1[10][10];
	
	game >> buffer1 [10][10];
	print(field);
	
	//cout << buffer1;
	
	// cout << "Choose your game: ENTER: 1, 2 or 3 " << endl;
	// cin >> g;
	
	// switch (g)
	// {
		// case 1: game.open ("game1.dat");
		// break;
		
		// case 2: game.open ("game2.dat");
		// break;
		
		// case 3: game.open ("game3.dat");
		// break;
	// }
	
	// //game.open ("game1.dat");
	// if(game.fail()) {
		// cout << "Something went wrong with " << g << endl;
		// exit(1);
// } else {
	// cout << "Let's START!";
// }

//char* tmp = (char*)board;

return 0; 
}

void new_game (int g) {
	ifstream game;
	//int g;
	cout << endl;
	cout << "Hello! Choose your game: ENTER: 1, 2 or 3 " << endl;
	cin >> g;
	
	switch (g)
	{
		case 1: game.open ("game1.dat");
		break;
		
		case 2: game.open ("game2.dat");
		break;
		
		case 3: game.open ("game3.dat");
		break;
	}
	
	//game.open ("game1.dat");
	if(game.fail()) {
		cout << "Something went wrong with " << g << endl;
		exit(1);
} else {
	cout << "Let's START!";
	cout << endl;
}
	
}
void print (char field [10][10]) {
	//char field[10][10];

for(int x=0; x<10; x++) {
	for(int y=0; y<10; y++) {
		field[x][y] = '.';
	}
	
}
cout << endl << "		  0 1 2 3 4 5 6 7 8 9" << endl;
for(int x=0; x<10; x++) {
	cout << "		" <<x << " ";
	for(int y=0; y<10; y++) {
		cout << field [x] [y] << " ";
		
	}
	cout << endl;
}
}