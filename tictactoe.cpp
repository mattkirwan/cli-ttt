#include <iostream>
#include <stdlib.h>;

using namespace std;

char board_data[10] = {'o','1','2','3','4','5','6','7','8','9'};

void board();

int main()
{
	//cout<<board_data[2];
	
	board();
	return 0;
}

void board()
{
	system("cls");
	cout << "\n\nTic Tac Toe\n\n";
}