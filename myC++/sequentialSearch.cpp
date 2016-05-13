#include<iostream>

using namespace std;

int sequencial_search(int* array, int len, int key)
{
	int i = len - 1;
	array[0] = key;
	while(array[i] != key)
	{
		i --;
	}
	return i;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8};
	cout<<sequencial_search(a, 8, 5)<<endl;
}

