#include<iostream>
#include<string>
using namespace std;

int main ()
{
	string input;
	cout<<"Please input a line of test: "<<endl;
	getline(cin, input,'\n');
	cout<<"You typed in the line\n"<<input<<endl;
}

