#include<iostream>
#include<cstring>
using namespace std;

void loopMove(char* str, int steps)
{
	int n = strlen(str) - steps;
	char tmp[100];
	strcpy(tmp, str + n);
	strcpy(tmp+steps, str);
//	*(tmp + strlen(str)) = '\0';
	tmp[strlen(str)] = '\0';
	strcpy(str, tmp);
}

int main ()
{
	char* s = "abcdefghijk";
	loopMove(s, 3);
	cout<<s<<endl;
}
