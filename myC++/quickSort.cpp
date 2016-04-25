#include<iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//Partition function
int partition(int* array, int low, int high)
{
	int i = low;
	int j = low - 1;
	for(;i<high; i++)
	{
		j++;
		if(array[i] <= array[high])
		{
			swap(array[i], array[j]);
		}
	}
	swap(array[high], array[j+1]);
	return j+1;
}

void myQuickSort(int* array, int low, int high)
{
	if(low < high)
	{
		int index = partition(array, low, high);
		myQuickSort(array, low, index - 1);
		myQuickSort(array, index + 1, high);
	}
} 

int main()
{
	int a[] = {5, 8, 10, 0, 1};
	myQuickSort(a, 0, 5);
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<endl;
	}
}
