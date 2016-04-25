#include<iostream>

using namespace std;

void selectSort(int* array, int len)
{
	for(int i=0; i<len-1; i++)
	{
		int index = i;
		for(int j=i+1; j<len; j++)
		{
			if(array[j] < array[index])
			{
				index = j;
			}
		}
		if(i != index)
		{
			int temp = array[i];
			array[i] = array[index];
			array[index] = temp;	
		}
	}
}

int main()
{
	int a[6] = {3, 8, 1, 0, 13, 65};
	selectSort(a, 6);
	for(int i=0; i<6; i++)
	{
		cout<<a[i]<<endl;
	}
}
