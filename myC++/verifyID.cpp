#include<iostream>

using namespace std;

int verifyID(char* num)
{
	char* p = num;
	int len = strlen(num);
	if(len != 18)
	{
		return 1;
	}
	else
	{
		for(int i=0; i<len-1; i++)
		{
			if(num[i]<='0'||num[i]>='9')
			{
				return 2;
			}
			if((num[len-1]>='0'&&num[len-1]<='9')||(num[len-1]>='a'&&num[len-1]<='z'))
			{
			}
			else
			{
				return 3;
			}
			if
		
