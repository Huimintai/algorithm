#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
	
void reverse(char* s, int head, int tail)
{
	int len = tail - head + 1;
	for(int i=head; i<len/2+head; i++)
	{
		swap(s[i], s[tail-i+head]);
	}
}

void reverse(char* s)
{
	if(s == NULL)
	{
		return;
	}
	reverse(s, 0, strlen(s)-1);
	int head = 0, tail = 0;
	char* p = s;
	while(*p != '\0')
	{
		if(*p == ' ')
		{
			reverse(s, head, tail-1);
			p++;
			tail++;
			head = tail;
		}
		else
		{
			p++;
			tail++;
		}
	}
	reverse(s, head, tail-1);
}

int main()
{
	char s[256] = "good morning";
	reverse(s);
	cout<<s<<endl;
}	
