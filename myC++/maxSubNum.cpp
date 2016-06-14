#include<iostream>
#include<stdlib>
#include<cmath>
#include<map>
#include<string>
using namespace std;

void getNum(string s)
{
	map<char, int> m;
	for(int i=0; i<10; i++)
	{
		m['0'+i] = i;
	}
	int len = s.length();
