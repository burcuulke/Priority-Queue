# include<iostream>
using namespace std;

struct node
{
	int priority;
	int data;
	struct node* next;
}; 

class PriorityQueue
{
private:
	
public:
	node* queue;
	PriorityQueue()
	{
		queue = NULL;
	}
	void Enqueue(int element, int priority);
	void Dequeue();
	void reardata();
	void frontdata();
	void display();
};
