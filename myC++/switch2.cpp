#include<iostream>

using namespace std;

void playgame ()
{
	cout<<"Welcome to play the game!\n";
}

void loadgame ()
{}

void playmultiplayer ()
{}

int main ()
{
	int input;

	cout << "1.Play game\n";
	cout << "2.load game\n";
	cout << "3.Play multiplayer\n";
	cout << "4.Exit\n";
	cout << "Selection: ";
	cin >> input;
	switch(input)
	{
		case 1:
			playgame();
			break;
		case 2:
			loadgame();
			break;
		case 3:
			playmultiplayer();
			break;
		case 4:
			cout<<"Thank for your playing!\n";
			break;
		default:
			cout<<"Error inout!\n";
	}
}















