#include<iostream>

using namespace std;

float caculateString(char* s)
{
	float a = 0;
	float b = 0;
	char operater;
	while(*s != ' ')
	{
		a = a * 10 + *s - '0';
		s++;
	}
	operater = *(++s);
	s += 2;
	while(*s != '\0')
	{
		b = b * 10 + *s - '0';
		s++;
	}
	switch(operater)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
	}
}

int main()
{
	char s[10] = "300 + 5";
	cout<<caculateString(s)<<endl;
}
