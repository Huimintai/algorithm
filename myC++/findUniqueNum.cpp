#include<iostream>

using namespace std;

int findUniqueNum(int* a, int len)
{
	int tmp = a[0];
	for(int i=1; i<len; i++)
	{
		tmp = tmp ^ a[i];
	}
	return tmp;
}

int main()
{
	int a[9] = {1,2,1,2,5,6,5,6,9};
	cout<<findUniqueNum(a, 9)<<endl;
}
