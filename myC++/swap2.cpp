#include<iostream>

using namespace std;

void swap(int *index1, int *index2)
{
	int temp = *index1;
	*index1 = *index2;
	*index2 = temp;
}

int main ()
{
	int x = 10; 
	int y = 2;
	int z = 3;
	swap(z, x);
	cout<<z<<" "<<x<<endl;
}
