#include<stdlib.h>
#include<stdio.h>

void i_s(int data,int position)
{	 int i
 	struct node *p=head;	//temperory pointer for traverse
 	struct node *new=(struct node)malloc(sizeof(struct node));
	new->data=data;
	if(position==1)		//if node inserted at first position
	{	
		printf("hello")
			new->next=p;
			head=new;
	}
	for(i=1;i<position-1;i++)	//traverse the position-1 node
	{
		p=p->next;
	}
	new->next=p->next;	//new node 
	p->next=new;
}

