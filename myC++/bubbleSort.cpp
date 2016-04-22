#include<iostream>

using namespace std;

void myBubbleSort(int* list, int len)
{
	bool exchange = true;
	for(int i=0; i<len-1&&exchange; i++)
	{
		exchange = false;
		for(int j=len-2; j>=i; j--)
		{
			if(list[j] > list[j+1])
			{
				int tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
				exchange = true;
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
