#include<iostream>

using namespace std;

void getNum(char* s)
{
	int curValue = 0;
	int maxValue = 0;
	while(*s != '\0')
	{
		curValue = *s - '0';
		if(*(++s)- '0' > curValue)
		{
			curValue = curValue * 10 + *s - '0';
		}
		s++;
	}
