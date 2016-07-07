#include<iostream>
#include<cstring>

using namespace std;

int getLargeSubNum(char* s)
{
	int len = strlen(s);
	int max = 0;
	int cur = s[0] - '0';
	for(int i=1; i<len; i++)
	{
		int num = s[i] - '0';
		int preNum = s[i-1] - '0';
		if(num > preNum)
		{
			cur = cur * 10 + num;
		}
		else
		{
			cur = num;
		}
		if(cur > max)
		{
			max = cur;
		}
	}
	return max;
}

int main()
{
	char s[100] = "123045189";
	cout<<getLargeSubNum(s)<<endl;
}

