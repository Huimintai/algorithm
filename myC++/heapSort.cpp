#include<iostream>

using namespace std;

void adjustHeap(int* array, int p, int len)
{
	int curParent = array[p];
	int child = 2 *p + 1;
	while(child < len)
	{
		if(child+1<len&&array[child]<array[child+1])
		{
			child ++;
		}
		if(curParent<child)
		{
			array[p] = array[child];
			p = child;
			child = 2 * child + 1;
		}
		break;
	array[p] = curParent;
}

void heapSort(int* array, int len)
{
	for(int i=len/2-1; i>=0; i--)
	{
		adjustHeap(array, i, len);
	}
	for(int i=len-1; i>=0; i--)
	{
		int temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		adjustHeap(array, 0, i);
	}
}
