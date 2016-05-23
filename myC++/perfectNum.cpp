#include<iostream>

using namespace std;

/*int perfectNum(int a, int b)
{
	int count = 0;
	while(a <= b)
	{
		if(a % 30 == 0)
		{
			count++;
			a += 30;
		}
		else
		{
			a++;
		}
	}
	return count;
}
*/

int perfectNum(int a, int b)
{
	if(a % 30 != 0)
	{
		a = a + 30 - a % 30;
	}
	int count = 0;
	for(int i=a; i<=b; i=i+30)
	{
		count++;
	}
	return count;
}
int main()
{

	cout<<perfectNum(30, 60)<<endl;
}
