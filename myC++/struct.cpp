#include<iostream>
using namespace std;

struct PlayerInfo
{
	int skill_level;
	string name;
};

using namespace std;

int main ()
{
	PlayerInfo players[5];
	for (int i=0; i<5; i++)
	{
		cout<<"Please enter the name for player:"<<i<<endl;
		cin>>players[i].name;
		cout<<"Please enter the skill level for player:"<<i<<endl;
		cin>>players[i].skill_level;
	}
	for(int i=0; i<5; i++)
	{
		cout<<players[i].name<<" "<<players[i].skill_level<<endl;
	}
}
