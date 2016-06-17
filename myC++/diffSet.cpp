#include<iostream>
#include<map>
using namespace std;

void subSet(int* a, int len1, int* b, int len2)
{
	map<int, int> myMap;
	for(int i=0; i<len1; i++)
	{
		myMap[a[i]] ++;
	}
	for(int i=0; i<len2; i++)
	{
		myMap[b[i]] ++;
	}

	int size = myMap.size();
	for(int i=0; i<=size; i++)
	{
		if(myMap[i] == 1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main()
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {2,3,6,0,7};
	subSet(a, 5, b, 5);
}
