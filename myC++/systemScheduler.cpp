#include<iostream>

using namespace std;

void sort(int* task, int* sTask, int len)
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=len-1; j>i; j--)
		{
			if(task[sTask[j]] < task[sTask[j-1]])
			{
				int temp = sTask[j];
				sTask[j] = sTask[j-1];
				sTask[j-1] = temp;
			}
		}
	}

}

void scheduler(int* task, int taskLen,int* sTask, int* uTask)
{
	if(task == NULL || sTask == NULL || uTask == NULL)
	{
		return;
	}
	int j=0, k=0;
	for(int i=0; i<taskLen; i++)
	{
		if(task[i] <= 50) 
		{
			sTask[j++] = i;
		}
		else if(task[i] >= 50 && task[i] <= 255)
		{
			uTask[k++] = i;
		}
	}
	sort(task, sTask, j);
	sort(task, uTask, k);
	
	sTask[j] = -1;
	uTask[k] = -1;
}
	
int main()
{
	int task[9] = {0,30,155,1,80,300,170,40,99};
	int sTask[10];
	int uTask[10];
	scheduler(task, 9, sTask, uTask);
	int i=0;
	while(true)
	{
		if(sTask[i] != -1)
		{
			cout<<sTask[i]<<" ";
		}
		else
		{
			cout<<sTask[i]<<endl;
			break;
		}
		i++;
	}
}
