#include <iostream>
#include <fstream>

using namespace std;

//void new_game (int g);
void print (char field [10][10]);
//void u_board();
//void s_count();
//void coord(int& x, int& y);
//void processing (char buffer2[][10], char field[][10]);


int main () {
	
	int x, y;
	char g;
	//char cont = 'y';
	
	// Inputs/ prints ready numbers from the file
	ifstream game;
	//int l;
	
	char field [10][10];
	char buffer1[10][10];
	char buffer2 [10][10];
	
	// amount of 'x' 
	int count = 20;
	
	//new_game(l);
	
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
	
	//int count;
	
	game >> buffer1 [10][10];
	// char f;
	// char b2;
	
	print(field);
	
	//u_board();
	
	for(int i=0;i<10;i++) {
	
	for(int j=0; j<10; j++) {
		buffer2[i][j]=' ';
		}
		
	}
	
	//s_count();
	
	//char cell;
	//char* cell = (char*)field;
	
	// Ship/hit count.
	//char* cell = (char*)field[];
	
	//buffer2[a][b]=field[a][b];
	
		
	// for (int i = 0; i < 100;i++)
	// {
		// if (buffer2[i] == 'x')
			// count++;
	// }

	
	while(1) {
		
		//coord(x,y);
		cout << endl;
		cout << "Please enter the coordinates between 0 and 9 " << endl;
		cout << endl;
		cout << "x = ";
		cin >> x;
		cout << "y =";
		cin >> y;
		
		if (x > 9 || x < 0 || y < 0 || y > 9)
		{
			cout << "Wrong value. ";
			//coord(x,y);
		cout << endl;
		cout << "Please enter the coordinates between 0 and 9 " << endl;
		cout << endl;
		cout << "x = ";
		cin >> x;
		cout << "y =";
		cin >> y;
	}
		
	 //   processing (buffer2, field); 
	
	if (buffer2[x][y] == ' ')
		{
			if (field[x][y] == 'x')
			{
				cout << "HIT! " << endl;
				buffer2[x][y] = 'X';
				count--;
				if (count==0)
				{
					print(buffer2);
					cout << endl;
					cout << "The enemy is defeated. You won.";
					//exit (1);
					break;
				}
			}
			else
			{
				cout << "MISS! ";
				buffer2[x][y] = '0';
			}
			cout << endl;
			print(buffer2);
			cout << "--------------------------------------------";
		}
		else
		{
			cout << "Already hit there! Try other coordinates.";
		}
	}
	
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

// void new_game (int g) {
	// ifstream game;
	// //int g;
	// cout << endl;
	// cout << "Hello! Choose your game: ENTER: 1, 2 or 3 " << endl;
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
	// cout << endl;
// }
	
// }
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
		cout << field [x][y] << " ";
		
	}
	cout << endl;
}
}

// Create empty array for recording the player's moves
// void u_board(){
// char field [10][10]; 
// char buffer2 [10][10] ;
// //char buffer2 [10][10];

// // buffer2[0][0]=' ';
// for(int i=0;i<10;i++) {
	
	// for(int j=0; j<10; j++) {
		// buffer2[i][j]=' ';
	// }
		
// }
// }

// void s_count() {
	// char field;
	// char cell;
	// char* cell = (char*)field;
	
	// int count = 0;
	// for (int i = 0; i < 100;i++)
	// {
		// if (cell[i] == 'x')
			// count++;
	// }
// }

// void coord(int& x, int& y) {
	
	// cout << endl;
	// cout << "Please enter the coordinates between 0 and 9 " << endl;
	// cout << endl;
	// cout << "x = ";
	// cin >> x;
	// cout << "y =";
	// cin >> y;
// }

// void processing (char buffer2[][10], char field[][10], int &x, int &y)  {
	// //char buffer2;
	// //char field;
	// int count;
	// //int &x; 
	// //int &y;
	
	// if (buffer2[x][y] == ' ')
		// {
			// if (field[x][y] == 'x')
			// {
				// cout << "HIT! " << endl;
				// buffer2[x][y] = 'X';
				// count--;
				// if (!count)
				// {
					// print(buffer2);
					// cout << endl;
					// cout << "The enemy is defeated. You won.";
					// exit (1);
				// }
			// }
			// else
			// {
				// cout << "MISS! ";
				// buffer2[x][y] = '0';
			// }
			// cout << endl;
			// print(buffer2);
			// cout << "----------------------------------------";
		// }
		// else
		// {
			// cout << "Already hit there! Try other coordinates.";
		// }
// }