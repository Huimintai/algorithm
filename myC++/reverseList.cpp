#include<iostream>

using namespace std;

struct NodeList
{
	int value;
	NodeList* next;
};

NodeList* reverseList(NodeList* list)
{
	if(list == NULL)
	{
		return NULL;
	}
	NodeList* p = list;
	NodeList* q = p->next;
	p->next = NULL;

	while(q != NULL)
	{
		NodeList* tmp = q->next;
		p = q;
		q = tmp;
	}
	return p;
}

int main()
{

}
