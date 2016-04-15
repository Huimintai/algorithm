#include<iostream>

using namespace std;

int strToInt(char* s)
{	
	int num = 0;
	while(*s != '\n')
	{
		if (*s<'0' || *s>'9')
		{
			return -1;
		}
		num = num * 10 + *s - '0';
		s++;
	}
	return num;
}

int main ()
{
	char s[100] = "12345";
	int a = strToInt(s);
	cout<<a<<endl;
}	
