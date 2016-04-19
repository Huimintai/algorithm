#include<iostream>

using namespace std;

void replaceSpace(char* str)
{
	if(str == NULL)
	{
		return;
	}
	
	int len = 0;
	int num = 0;
	char* head = str;
	while(*str != '\0')
	{
		len ++;
		if(*str == ' ')
		{
			num ++;
		}
		str ++;
	}

	int i = len;
	int j = len + num * 2;
	while(i >= 0)
	{
		if(head[i] != ' ')
		{
			head[j] = head[i];
			j --;
		}
		else
		{
			head[j] = '0';
			head[j-1] = '2';
			head[j-2] = '%';
			j -= 3;
		}
		i --;
	}
}

int main()
{
	char s[100] = "sdfsk dfcfsd jkjw";
	replaceSpace(s);
	cout<<s<<endl;
}
