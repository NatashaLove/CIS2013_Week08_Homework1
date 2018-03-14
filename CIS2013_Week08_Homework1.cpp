#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void print (char field [10][10]);

int main () {
	
	int x, y;
	char g;
	
	// Inputs/ prints ready numbers from the file
	ifstream game;
		
	char display_field [10][10];
	char game_buffer[10][10];
		
	// amount of 'x' in a game
	int count = 20;
	 
	 //choose game	
	cout << endl;
	cout << "Hello! Choose your game: ENTER: 1, 2 or 3 " << endl;
	cin >> g;
	
	if (g == '1') {
	game.open("game1.dat"); 
	}else if (g == '2'){ 
	game.open("game2.dat"); 
	}else if (g == '3'){ 
	game.open("game3.dat"); 
	}else
	{ 
	cout << "Could not find the file"; 
	exit(1); 
	} 

	
	if(game.fail()) {
		cout << "Something went wrong with " << g << endl;
		exit(1);
} else {
	cout << "Let's START!";
	cout << endl;
}

// Create temporary array, where game is loaded (one line)
	char temp_buffer[100];
	game >> temp_buffer;

	// Transform temp array into 2D array (board)
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			game_buffer[y][x] = temp_buffer[y * 10 + x];
		}
	}
	
	// Print empty field
	
	for(int x=0; x<10; x++) {
	for(int y=0; y<10; y++) {
		display_field[x][y] = '.';
	}
	
}
	
	print(display_field);
		
	
	// ask user for coordinates
	while(1) {
		
		cout << endl;
		cout << "Please enter the coordinates between 0 and 9 " << endl;
		cout << endl;
		cout << "x = ";
		cin >> x;
		cout << "y =";
		cin >> y;
		cout << endl;
		
		 if (cin.fail()) {
		cout << "Wrong value!";
		
		exit (1);
		 }
		
		if (x > 9 || x < 0 || y < 0 || y > 9)
		{
		cout << "Wrong value. ";
			
		cout << endl;
		cout << "Please enter the coordinates between 0 and 9 " << endl;
		cout << endl;
		cout << "x = ";
		cin >> x;
		cout << "y =";
		cin >> y;
	}
				// Check if this coordinate has been already used
		if (display_field[x][y] != '.')
		{
			cout << "Already tried these coordinates. Enter other coordinates. " << endl;
		}
		else
		{
			// Check for hit or miss and update and print display_field	
	
			if (game_buffer[x][y] == 'x')
			{
				display_field[x][y] = 'X';
				cout << "HIT! " << endl;
				count--;
				print(display_field);\
				cout << endl;				
				if (count==0)
				{
					print(display_field);
					cout << endl;
					cout << "The enemy is defeated. You won.";
					
					break;
				}
			}
			else {
			
				cout << "MISS! ";
				display_field[x][y] = '0';
		
			cout << endl;
			print(display_field);
			
			} 
	}
	
cout << "--------------------------------------------";
	}
return 0; 
}


void print (char field [10][10]) {
	
cout << endl << "		  0 1 2 3 4 5 6 7 8 9" << endl;
for(int x=0; x<10; x++) {
	cout << "		" <<x << " ";
	for(int y=0; y<10; y++) {
		cout << field [x][y] << " ";
		
	}
	cout << endl;
}
}

