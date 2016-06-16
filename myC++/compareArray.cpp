#include<iostream>

using namespace std;

int compareArray(int* a, int len1, int* b, int len2)
{
	int i = len1 - 1;
	int j = len2 - 1;
	int count = 0;
	while(i>=0 && j>=0)
	{
		if(a[i] != b[j])
		{
			count++;
		}
		i--;
		j--;
	}
	return count;
}

int main()
{
	int a[5] = {2,3,4,5,6};
	int b[3] = {4,15,65};
	cout<<compareArray(a, 5, b, 3)<<endl;
}
