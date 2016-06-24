#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct node
{
	char value;
	struct node* next;
}Node;

Node* createList(int n)
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* tail = head;
	tail->next = NULL;
	for(int i=0; i<n; i++)
	{
		Node* p_new = (Node*)malloc(sizeof(Node));
		p_new->value = 'a' + i;
		tail->next = p_new;
		p_new->next = NULL;
		tail = p_new;
	}
}

void travelList(Node* head)
{
	Node* p = head->next;
	while(p != NULL)
	{
		cout<<p->value<<" ";
		p = p->next;
	}
}

Node* transNeighbor(Node* head)
{
	Node* p = head->next;
	while(p->next != NULL && p->next->next != NULL)
	{
		char val = p->value;
		p->value = p->next->value;
		p->next->value = val;
		p = p->next->next;
	}
	return head;
}

int main()
{
	Node* head = createList(7);
	travelList(head);
//	transNeighbor(head);
//	travelList(head);
}


