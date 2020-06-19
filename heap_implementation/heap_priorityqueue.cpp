# include<iostream>
# include<malloc.h>
# include "heap_priorityqueue.h"
using namespace std;

void PriorityQueueHeap::size()
{
	cout << "Priority queue size : " << array.size() << endl;
}

void PriorityQueueHeap::Enqueue(int item)
{
	array.push_back(item);
	int index = array.size() - 1;
	heapify_up(index);

}

void PriorityQueueHeap::heapify_up(int i) 
{

	if (i && array[parent(i)] < array[i])
	{
		swap(array[i], array[parent(i)]);

		heapify_up(parent(i));
	}
}
void PriorityQueueHeap::heapify_down(int i)
{
	int left = leftChild(i);
	int right = rightChild(i);

	int max = i;

	if (left < array.size() && array[left] > array[i])
		max = left;

	if (right < array.size() && array[right] > array[max])
		max = right;

	if (max != i) {
		swap(array[i], array[max]);
		heapify_down(max);
	}
}

void PriorityQueueHeap::display() 
{
	for (unsigned i = 0; i < array.size(); i++)
	{
		cout << array[i]<<" ";
	}
}

void PriorityQueueHeap::peek() 
{
		if (array.size() == 0)
			throw out_of_range("Queue is empty");
		else
			cout<<"high priority element :"<< array.at(0)<<endl;	
	
}

bool PriorityQueueHeap::empty() {
	return array.size() == 0;
}


void PriorityQueueHeap::Dequeue()
{
	
		if (array.size() == 0)
			cout<<"Queue is empty";

		array[0] = array.back();
		array.pop_back();

		heapify_down(0);
}





