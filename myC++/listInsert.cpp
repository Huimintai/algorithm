#include<iostream>

using namespace std;

int main ()
{
	int votes[10];
	for(int i=0; i<10; i++)
	{

		votes[i] = 0;
	}
	
	int candinate;
	cin>>candinate;

	while(candinates>=0 && candinate<=9)
	{
		votes[candinate]++;
		cout<<"Please enter another vote: ";
		cin>>candinate;
	}
	for (int i=0; i<10; ++i)
	{
		cout<<vote[i]<<'\n';
	}
}
