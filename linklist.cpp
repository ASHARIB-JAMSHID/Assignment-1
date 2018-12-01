#include "linklist.h"
#include <iostream>

using namespace std;

linklist::linklist()
{
    head=NULL;
}

linklist::  iend(double r,double i)//insert at the end
{
    if (head==NULL)
{
    node *temp=new node;
		temp->re=r;
		temp->im=i;

			temp-> next =head;
	head=temp;

}

else
   {

   node *n=new node;
	node *temp=head;
	while(temp ->next != NULL)
	{temp= temp->next;
	}
	temp->next =n;
	n->re=r;
	n->im=i;
	n->next=NULL;
}
 }

linklist::delpos(int p)//delete at a position
	{
		node *pre=head;
		node *cur=head;
if(p>1)
{       for(int i=1;i<p-1;i++)
		{
			pre=pre->next;

		}

		for(int i=1;i<=p-1;i++)
		{
			cur=cur->next;

		}


		pre->next=cur->next;
		delete cur;
}
else
{
    cur=cur->next;
    head=cur;
    delete pre;
}
	}

linklist::iafpos(double r,double i,int p)//insert after a position
{
		node *pre=head;
		node *cur=head;
        node *n=new node;
		for(int i=1;i<p;i++)
		{
			pre=pre->next;

		}

		for(int i=1;i<=p;i++)
		{
			cur=cur->next;

		}
n->re =r;
n->im=i;
n->next=cur;
pre->next=n;

}

linklist::valpos(double &a,double &b,int p)//value at position
{
    node * pre=head;
    for (int i=0;i<p-1;i++)
    {
        pre=pre->next;
    }
    a=pre->re;
    b=pre->im;

}

linklist::traverse()//print the list
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->re;
		if (temp->im>0)
        {
            cout<<"+";

        }   cout<<temp->im<<"j"<<"  ";
		temp=temp->next;
	}
}
