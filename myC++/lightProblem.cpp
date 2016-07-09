#include<iostream>

using namespace std;

int getLightLampNum(int n)
{
	int count = 0;
	for(int i=1; i<=n; i++)
	{
		if(i*i <= n)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	cout<<getLightLampNum(20)<<endl;
}
