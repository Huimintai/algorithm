#include<iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int partition(int* array, int low, int high)
{
	int i = low;
	int j = low - 1;
	int pivot = array[high];
	for(i=0; i<high; i++)
	{
		if(array[i] < pivot)
		{
			j ++;
			swap(array[j], array[i]);
		}
	}
	swap(array[j+1], array[high]);
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
	int a[5] = {3, 6, 1, 7, 5};
	myQuickSort(a, 0, 5);
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<endl;
	}
}	
