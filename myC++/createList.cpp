#include<stdlib.h>
#include<iostream>

using namespace std;
typedef struct node
{
	int data;
	node* next;
}node;

node* createList()
{
	int i = 0;
	node* head, *p, *q;
	head = (node*)malloc(sizeof(node));

	while(1)
	{
		cout<<"Please input the data:"<<endl;
		int x;
		cin>>x;
		if(x == 0)
			break;
		p = (node*)malloc(sizeof(node));
		p->data = x;
		if(++i == 1)
		{
			head->next = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
	}
	q->next = NULL;
	return head;
}

//Get the list length
int getLength(node* list)
{
	int len = 0;
	node* p = list;
	while(p != NULL)
	{
		len ++;
		p = p->next;
	}
	return len;
}

//Print the list
void printList(node* list)
{
	node* head = list;
	node* p = head->next;
/*	if(p == NULL)
	{
		return;
	}*/
	while(p != NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

//Find one node of a list
node* searchNode(node* list, int k)
{
	if(list == NULL || list->next == NULL || k < 0)
	{
		return NULL;
	}
	node* p = list->next;
	if(k == 0)
	{
		return list;
	}
	while(k > 0)
	{
		p = p->next;
		if(p != NULL)
		{
			k --;
		}
	}
	return p;
}

int main()
{
	node* head = createList();

	cout<<"The length list: "<<getLength(head)<<endl;
	cout<<"The list is:"<<endl;
	printList(head);
	node* p = searchNode(head, 3);
	cout<<p->next<<endl;
}

