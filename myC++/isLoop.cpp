#include<iostream>

using namespace std;

struct NodeList
{
	int value;
	NodeList* next;
};

bool isLoop(NodeList* list)
{
	if(list == NULL || list->next == NULL)
	{
		return false;
	}
	NodeList* quick = list;
	NodeList* slow = list;
	while(quick != NULL && quick->next != NULL)
	{
		slow = slow->next;
		quick = quick->next->next;
		if(slow == quick)
		{
			return true;
		}
	}
	return false;
}
int main()
{
}
	
