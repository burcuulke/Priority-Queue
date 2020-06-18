#include "linkedlist.h"
using namespace std;
 
int main()
{
	PriorityQueue p;
	int menu, item, priority;
	do
	{
		cout << "\n1.Insert\n";
		cout << "2.Delete\n";
		cout << "3.Display\n";
		cout << "4.Front Data\n";
		cout << "5.Rear Data\n";
		cout << "6.Quit\n";
		cout << "Enter your option (1-6): ";
		cin >> menu;
		if (menu == 1) {
			cout << "Input the value (add) : ";
			cin >> item;
			cout << "Priority is : ";
			cin >> priority;
			p.Enqueue(item, priority);
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
			p.frontdata();
		}
		else if (menu == 5)
		{
			p.reardata();
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


	return 0;
}
