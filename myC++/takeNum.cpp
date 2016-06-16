#include<iostream>

using namespace std;

int takeNum(char* s, int* output)
{
	if(s == NULL)
	{
		return 0;
	}
	int num = 0;
	int count = 0;
	while(*s != '\0')
	{
		if(*s>='0' && *s<='9')
		{
			num = num * 10 + *s - '0';
			if(*(s+1)<'0' || *(s+1)>'9')
			{
				count++;
				*output++ = num;
				num = 0;
			}
		}
		s++;
	}
	return count;
}

int main()
{
	char s[100] = "ab00cd+123fght456-25 3.005fgh";
	int a[100] = {0};
	cout<<takeNum(s, a)<<endl;
	for(int i=0; i<6; i++)
	{
		cout<<a[i]<<",";
	}
	cout<<endl;
}
