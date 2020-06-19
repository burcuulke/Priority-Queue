# include<iostream>
#include <vector>
using namespace std;
//max heap

class PriorityQueueHeap
{
public:
	PriorityQueueHeap(){}
	vector<int> array;

	int parent(int a) {
		return (a - 1) / 2;
	}
	int leftChild(int a) {
		return 2 * a + 1;
	}
	int rightChild(int a) {
		return 2 * a + 2;
	}
	void size();
	void heapify_down(int i);
	void heapify_up(int i);
	bool empty();
	void Enqueue(int item);
	void Dequeue();
	void display();
	void peek();
};
