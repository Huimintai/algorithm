#include<iostream>

using namespace std;

int main ()
{
	int *ptr;
	int a;
	ptr = &a;
	cout<<"Please input a:\n";
	cin>>a;
	cout<<*ptr<<endl;
}
