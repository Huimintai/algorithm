#include<iostream>

using namespace std;

<<<<<<< HEAD
bool findNumber(int* a, int row, int cloumn, int value)
{
	if(a == NULL)
	{
		return false;
	}
	int i = 0;
	int c = cloumn;
	while(i < row && row > 0 && cloumn > 0 )
	{
		if(a[i * cloumn + c - 1] == value)
		{
			return true;
		}
		else if(a[i * cloumn + c - 1] > value)
		{
			c --;
		}
		else 
		{
			i ++;
		}
	}
	return false;
}

int main()
{
	int a[3][3] = {{1, 3, 5}, {2, 4, 6}, {8, 9, 10}};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<findNumber(*a, 3, 3, a[i][j])<<endl;
		}
	}
}
=======
bool find(int* matrix, int rows, int columns, int number)
{
	
>>>>>>> 4105d6cb112ad5d01eef4796cdf8c69e2921611e
