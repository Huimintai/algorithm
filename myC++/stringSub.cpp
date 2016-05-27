#include<iostream>

using namespace std;

int strToInt(char* s)
{
	int sum = 0;
	while(*s != '\0')
	{
		sum = sum * 10 + *s - '0';
		s++;
	}
	return sum;
}
int stringSub(char* a, char* b)
{
	cout<<strToInt(a)-strToInt(b)<<endl;
}

int main()
{
	char s1[10] = "120";
	char s2[10] = "20";
	stringSub(s1, s2);
}
