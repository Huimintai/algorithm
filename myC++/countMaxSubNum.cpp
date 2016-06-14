#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int getMaxSubNum(char* s)
{
	if(s == NULL)
	{
		return 0;
	}
	int len = strlen(s);
	if(len < 1)
	{
		return 0;
	}
	int num = *s - '0';
	int max = *s - '0';
	for(int i=1; i<len; i++)
	{
		int cur = s[i] - '0';
		int pre = s[i-1] - '0';
		if(cur > pre)
		{
			num = num * 10 + cur;
		}
		else
		{
			if(num > max)
			{
				max = num;
			}
			num = cur;
		}
	}
	if(num > max)
	{
		max = num;
	}
	return max;
}

int main()
{
	char s[100] = "123416789";
	cout<<getMaxSubNum(s)<<endl;
}
