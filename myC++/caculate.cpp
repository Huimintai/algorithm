#include<iostream>

using namespace std;

int main()
{
	int a;
	int b;
	char o;
	cin >> a;
	cin >> o;
	cin >> b;
	switch(o)
	{
		case '+':
			cout<<(a + b)<<endl;
			break;
		case '-':
			cout<<(a - b)<<endl;
			break;
		case '*':
			cout<<(a * b)<<endl;
			break;
		case '/':
			cout<<(a / b)<<endl;
			break;
		default:
			break;
	}
	return 0;
}
