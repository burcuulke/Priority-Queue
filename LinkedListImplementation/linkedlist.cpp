# include<iostream>
# include<malloc.h>
# include "linkedlist.h"
using namespace std;


void PriorityQueue::Enqueue(int element, int priority)
{
	node* temp, * q1;

	temp = (node*)malloc(sizeof(node));
	temp->data = element;
	temp->priority = priority;

	/*Queue boş or prioritysi high*/
	if (queue == NULL || priority < queue->priority)
	{
		temp->next = queue;
		queue = temp;
	}
	else
	{
		q1 = queue;
		while (q1->next != NULL && q1->next->priority <= priority)
			q1 = q1->next;
		temp->next = q1->next;
		q1->next = temp;
	}
}



void PriorityQueue::Dequeue()
{
	node* temp;

	if (queue == NULL)
	{
		cout << "Queue Empty\n";
	}
	else
	{
		temp = queue;
		cout << "Deleted is " << temp->data<<endl;
		queue = queue->next;
		free(temp);
	}
}



void PriorityQueue::display()
{
	node* ptr;
	ptr = queue;
	if (queue == NULL)
		cout<<"Queue is empty\n";
	else
	{
		cout<<"Queue is :\n";
		cout<<"Priority     item\n";
		while (ptr != NULL)
		{
			cout<<ptr->priority<<"             "<< ptr->data<<endl;
			ptr = ptr->next;
		}
	}
}
void PriorityQueue::frontdata() 
{
	if (this->queue == NULL)
		cout << "Queue is empty\n";
	else
		cout << "Queue front data is :" << queue->data;
}

void PriorityQueue::reardata() 
{
	if (this->queue == NULL)
		cout << "Queue is empty\n";
	else {
		node* tut = queue;
		while (tut->next != NULL)
		{
			tut = tut->next;
		}
		cout << "Queue rear data is :" << tut->data << endl;
	}
}
