#include<iostream>

using namespace std;

struct ListNode
{
	int value;
	ListNode* next;
};

void AddToTail(ListNode* head, int value)
{
	ListNode* pNew = new ListNode();
	pNew->value = value;
	pNew->next = NULL;
	
	if(head == NULL)
	{
		head = pNew;
	}
	else
	{
		ListNode* p = head;
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = pNew;	
	}
}
