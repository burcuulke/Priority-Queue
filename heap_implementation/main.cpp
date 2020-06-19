#include "heap_priorityqueue.h"
using namespace std;
 
int main()
{
	cout << "...Using max-heap for priority queue..."<<endl;
	PriorityQueueHeap p;
	int menu,item;
	do
	{
		cout << "\n1.Insert\n";
		cout << "2.Delete\n";
		cout << "3.Display Priority Queue\n";
		cout << "4.Top Element\n";
		cout << "5.Size of PQueue\n";
		cout << "6.Quit\n";
		cout << "Enter your option (1-5): ";
		cin >> menu;
		cout << endl;
		if (menu == 1) {
			cout << "Input the value (add) : ";
			cin >> item;
			p.Enqueue(item);
		}
		else if (menu == 2)
		{
			p.Dequeue();
		}
		else if (menu == 3)
		{
			p.display();
		}
		else if (menu == 4)
		{
			p.peek();
		}
		else if (menu == 5)
		{
			p.size();
		}
		else if (menu == 6)
		{
			break;
		}
		else
		{
			cout << "Invalid, re - enter!!\n";
		}

	} while (menu != 6);

	cout << endl;
	system("pause");
	return 0;
}
