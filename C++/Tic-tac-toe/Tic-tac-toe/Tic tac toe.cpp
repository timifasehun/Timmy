#include <iostream>
#include <string.h>
#include <sstream>
#include <ctype.h>

using namespace std;
class game{

	private:
		int place,gameOn,turn,winner;
		char board[9];
		unsigned short int win[9];
		string posZero,posOne,posTwo,posThree, posFour,posFive, posSix,posSeven, posEight;	
	public:		
		game()
		{
			turn = 0;
			for(int i = 0; i < 9; i++)
			{
				board[i] = '\0';
				win[i] = '\0';
			}	
			cout << board[1];
		}
		int getWinner()
		{ return winner; }
		void setTurn()
		{ turn = (turn == 0) ? 1 : 0; }
		void setCords()
		{
			int x = 0;
			cout << "\n\nEnter place number: ";
			cin >> x;
			cout << "\n";
			place = x - 1;
		}
		int setGrid()
		{
			if(board[place] == 'O' || board[place] == 'X')
			{
				cout << "\nThat place is already taken!" << endl;
				draw();
				return 0;
			}	
			else if(win[place] == 1 || win[place] == 2)
			{
				cout << "\nWin already taken\n";
				draw();
				return 0;
			}
			else
			{
				if(turn == 0)
				{
					board[place] = 'X';
					win[place] = 1;
					return 1;
				}
				else
				{
					board[place] = 'O';
					win[place] = 2;
					return 1;
				} } }
		
		bool play()
		{
			for(int x = 1; x < 3; x++)
			{
				if(win[0] == x)
				{
					if(win[1] == x) { if(win[2] == x) { winner = x; return true; } }
					if(win[4] == x) { if(win[8] == x) { winner = x; return true; } }
					if(win[3] == x) { if(win[6] == x) { winner = x; return true; } }
				}
				if(win[1] == x)
				{ if(win[4] == x) { if(win[7] == x) { winner = x; return true; } } }
				if(win[2] == x)
				{
					if(win[5] == x) { if(win[8] == x) { winner = x; return true; } }
					if(win[4] == x) { if(win[6] == x) { winner = x; return true; } }
				}
				if(win[3] == x)
				{ if(win[4] == x) { if(win[5] == x) { winner = x; return true; } } }
				if(win[6] == x)
				{ if(win[7] == x) { if(win[8] == x) { winner = x; return true; } } }
			}	
			return false;	
		}
		
		void draw()
		{ cout << endl << posZero <<posOne << posTwo << posThree << posFour << posFive << posSix << posSeven << posEight; }
		void drawChange()
		{
			for(int i = 0; i < 9; i++)
			{	
				switch(i)
				{
					case 0:
						if(board[0] == 'X')
						{ posZero = "_X_|"; }
						else if(board[0] == 'O')
						{ posZero = "_O_|"; }
						else
						{ posZero = "___|"; }
						break;
					case 1:	
						if(board[1] == 'X')
						{ posOne = "_X_|"; }
						else if(board[1] == 'O')
						{ posOne = "_O_|"; }
						else
						{ posOne = "___|"; }
						break;
					case 2:
						if(board[2] == 'X')
						{ posTwo = "_X_"; }
						else if(board[2] == 'O')
						{ posTwo = "_O_"; }
						else
						{ posTwo = "___"; }
						break;
					case 3:
						if(board[3] == 'X')
						{ posThree = "\n_X_|"; }
						else if(board[3] == 'O')
						{ posThree = "\n_O_|"; }
						else
						{ posThree = "\n___|"; }
						break;
					case 4:	
						if(board[4] == 'X')
						{ posFour = "_X_|"; }
						else if(board[4] == 'O')
						{ posFour = "_O_|"; }
						else
						{ posFour = "___|"; }
						break;
					case 5:
						if(board[5] == 'X')
						{ posFive = "_X_"; }
						else if(board[5] == 'O')
						{ posFive = "_O_"; }
						else
						{ posFive = "___"; }
						break;
					case 6:
						if(board[6] == 'X')
						{ posSix = "\n X |"; }
						else if(board[6] == 'O')
						{ posSix = "\n O |"; }
						else
						{ posSix = "\n   |"; }
						break;
					case 7:	
						if(board[7] == 'X')
						{ posSeven = " X |"; }
						else if(board[7] == 'O')
						{ posSeven = " O |"; }
						else
						{ posSeven = "   |"; }
						break;
					case 8:
						if(board[8] == 'X')
						{ posEight = " X "; }
						else if(board[8] == 'O')
						{ posEight = " O "; }
						else
						{ posEight = "   "; }
						break;
					}					
				}
				cout << posZero <<posOne << posTwo << posThree << posFour << posFive << posSix << posSeven << posEight;  }	
};
int main()
{	for(;;){	
		game TTT;
		while(!TTT.play())
		{
			TTT.drawChange();
			int r = 0;
			do{ 
			TTT.setCords();
			r = TTT.setGrid();
			}while(r < 1);
			TTT.setTurn();	
		}
		TTT.drawChange();
		
		if(TTT.getWinner() == 1)
		{ cout << "\nThe Winner is X.  Congrats" << endl; }
		if(TTT.getWinner() == 2)
		{ cout << "\nThe winner is O. Congrats" << endl; }
	}
	return 0;
}