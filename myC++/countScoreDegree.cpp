#include<iostream>

using namespace std;

void bubbleSort(int* a, int len)
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=len-1; j>=i; j--)
		{
			if(a[j] < a[j-1])
			{
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}

int averageDegree(int* a, int len)
{
	bubbleSort(a, len);
	if(a[0] >= 60)
	{
		return 60;
	}
	else
	{
		return a[4]/10*10;
	}	
}

int main()
{
	int a[10] = {61,51,30,20,10,70,80,90,99};
	cout<<averageDegree(a, 10)<<endl;
}
