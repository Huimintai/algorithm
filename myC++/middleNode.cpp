#include<iostream>

using namespace std;

struct NodeList
{
	int value;
	NodeList* next;
};

NodeList* findMiddleNode(NodeList* list)
{
	if(list == NULL || list->next == NULL)
	{
		return list;
	}
	NodeList* slow = list;
	NodeList* quick = list;
	while(quick != NULL && quick->next != NULL)
	{
		slow = slow->next;
		quick = quick->next->next;
	}
	return slow;
}

int main()
{
}
