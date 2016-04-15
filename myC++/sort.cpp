#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int findSmallestRemainingElement(int array[], int size, int index);
void swap(int array[],int first_index, int second_index)

int main ()
{
	int values[10];
	srand(time(null));
	for(int i=0; i<10; i++)
	{
		array[i] = rand()%100;
	}
	cout<<"Original array: ";
	displayArray(values, 10);
	cout<<'\n';
	
	sort(array,10);
	cout<<"Sorted array: ";
	displayArray(array,10);
	cout<<'\n';
}

void sort (int array[], int size)
	{
		int index = findSmallestRemainingElement(array, i);
		swap(array, i, index);
	}
}

int findSmallestRemainingElement (int array[],int size, int index)
{
	int index_of_sa=mallest_value = index;
	for(int i=index+1; i<size; i++)
	{
		if(array[i]<array[index_of_smallest_value])
		{
			index_of_smallest_value = i;
		}
	}
	return index_of_smallest_value;
}

void swap (int array[], int first_index, int second_index)
{
	int temp = array[first_index];
	array[first_index] = array[second_index];
	array[second_index] = temp;
}

void displayArray(int array[], int size)
{
	cout<<"{";
	for(int i=0; i<size; i++)
	{
		if(i !=0)
		{
			cout<<", ";
		}
		cout<<array[i];
	}
	cout<<"}";
}

