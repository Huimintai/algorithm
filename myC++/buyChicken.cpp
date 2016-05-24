#include<iostream>

using namespace std;
/*
void buyChicken()
{
	for(int i=0; i<=20; i++)
	{
		for(int j=0; j<=30; j++)
		{
			int k = 100 - i - j;
			if(5*i+3*j+k/3 == 100 && k%3 == 0)
			{
				cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}
	}
}
*/

void buyChicken()
{
	for(int k=0; k<=3; k++)
	{
		int x = 4 * k;
		int y = 25 - 7 * k;
		int z = 75 + 3 * k;
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
}
int main()
{
	buyChicken();
}
			
