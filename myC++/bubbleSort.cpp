#include<iostream>

using namespace std;

void myBubbleSort(int* list, int len)
{
	bool exchange = 1;
	for(int i=0; i<len&&exchange; i++)
	{
		exchange = 0;
		for(int j=len-1; j>=i; j--)
		{
			if(list[j] > list[j+1])
			{
				int tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
				exchange = 1;
			}
		}
	}
}

int main()
{
	int list[5] = {3,7,4,0,6};
	myBubbleSort(list, 5);
	for(int i=0; i<5; i++)
	{
		cout<<list[i]<<endl;
	}
}
