#include<iostream>
#include<cstring>
using namespace std;

int verifyPhoneNum(char* num)
{
	int len = strlen(num);
	char* p = num;
	if(len == 13)
	{
		while(*p != '\0')
		{
			if(*p >='0' && *p <= '9')
			{
				p++;
			}
			else
			{
				return 2;
			}
		}
		p = num;
		if(*p == '8' && *(p+1) == '6')
		{
		
		}
		else
		{
			return 3;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int main()
{
	char s[] = "20615a09236548";
	cout<<verifyPhoneNum(s)<<endl;
}		
