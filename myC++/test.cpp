#include<iostream>

using namespace std;

int getLampNum(int n)
{
	int count = 0;
	for(int i=0; i<=n; i++)
	{
		if(i*i <= n/2)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	cout<<getLampNum(20)<<endl;
}
