#include<iostream>
#include<string>
#include<map>
using namespace std;

void printString ( string& str)
{
	cout<<str<<endl;
	string s = "hello";
	str = s;
	cout<<s<<endl;
}

int main ()
{
/*	map<string, string> myMap;
	myMap["huimin"] = "student";
	cout<<myMap["huimin"]<<endl;
	

	string s = "there is one x in this string";
	printString(s);
	cout<<s<<endl;
	
i	const int x = 4;
	x = 5;
*/

	for(int i=0; i<5; i++)
	{
		 int s = i * i;
		cout<<s<<endl;
	}
}
