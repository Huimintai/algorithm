#include<iostream>

using namespace std;

void check_lunch(int num, int time, int* input, int* output)
{
	for(int i=0; i<num; i++)
	{
		if(i % time+1 == input[i])
		{
			output[i] = input[i];
		}
		else
		{
			output[i] = 0;
		}
	}
}

int main()
{
	int num = 12;
	int time = 3;
	int input[12] = {1,2,3,3,1,3,1,1,1,1,2,3};
	int output[12] = {0};
	check_lunch(num, time, input, output);
	for(int i=0; i<num; i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<endl;
}
