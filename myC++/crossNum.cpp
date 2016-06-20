#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a<b;
}
void crossNum(char* input,int len,  char* output)
{
	sort(input, input+len, cmp);
	char* p = output;
	for(int i=0; i<len; i++)
	{
		if(input[i] % 2 != 0)
		{
			*p = input[i];
			p +=2;
		}
	}
	p = output;
	p++;
	for(int i=0; i<len; i++)
	{
		if(input[i] % 2 == 0)
		{
			*p = input[i];
			p += 2;
		}
	}
}

int main()
{
	char a[10] = {1,2,3,4,5,6,7,8,9,10};
	char b[20] = {'\0'};
	crossNum(a, 10, b);
	for(int i=0; i<20; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
