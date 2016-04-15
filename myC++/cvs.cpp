#include<iostream>
#include<string>

using namespace std;

int main ()
{
	string my_string1 = "ten chars.";
//	int len = my_string1.size();
//	cout<<len<<endl;
	for(int i=0; i<my_string1.length(); i++)
	{
		cout<<my_string1[i];
	}
}
