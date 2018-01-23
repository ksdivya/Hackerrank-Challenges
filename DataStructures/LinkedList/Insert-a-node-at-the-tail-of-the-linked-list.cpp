#include<iostream>
using namespace std;
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

Node* insertnode(Node *head, Node *data)
{
	Node *node=new Node;
	node->data=data;
	if(head==NULL)
	{
		return node;
	}
	else
	{
	Node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=node;
    return head;
   }
}
