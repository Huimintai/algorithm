#include<iostream>

using namespace std;

struct NodeList
{
	int value;
	NodeList* next;
};

NodeList* findkFromEnd(NodeList* list, int k)
{
	if(list == NULL || k <= 0)
	{
		return 0;
	}
	NodeList* p = list;
	NodeList* q = list;
	for(int i=0; i<k-1; i++)
	{
		if(q == NULL)
		{
			return 0;
		}
		q = q->next;
	}
	while(q != NULL)
	{
		p = p->next;
		q = q->next;
	}
	return p;
}

int main()
{

}
