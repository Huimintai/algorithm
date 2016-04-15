#include<iostream>

using namespace std;

struct node
{
	int value;
	node* next;
};
/*
node* search (node* list, int value)
{
	if(list == NULL)
	{
		return NULL;
	}
	if(list->value == value)
	{
		return list;
	}
	else
	{
		return search(list->next, value);
	}
}
*/
int factorial (int x)
{
	if(x == 1)
	{
		return 1;
	}
	else
	{

		return x* factorial(x-1);
	}
}

int main ()
{
	int a = 8;
	cout<<factorial(a)<<endl;
}
