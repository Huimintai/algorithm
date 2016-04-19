#include<iostream>

using namespace std;

#define MAX 255

int main ()
{
	char p[MAX+1];
	unsigned char ch;
	for(ch=0; ch<MAX; ch++)
	{
		p[ch] = ch;
		cout<<ch<<" ";
	}
	p[ch] = ch;
	cout<<ch<<" "<<endl;
}
