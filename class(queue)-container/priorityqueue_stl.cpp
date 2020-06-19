# include<iostream>
# include<queue>
#include<vector>
using namespace std;

void print(priority_queue <int> q)
{
	priority_queue <int> temp = q;
	while (!temp.empty())
	{
		cout << temp.top()<<" ";
		temp.pop();
	}
	cout <<endl;
}

int main()
{
	cout << "...Using class <queue> in STL (Standard Template Library) for priority queue..." << endl;

	priority_queue <int> p;
	int menu, item;
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
			p.push(item);
		}
		else if (menu == 2)
		{
			p.pop();
		}
		else if (menu == 3)
		{
			print(p);
		}
		else if (menu == 4)
		{
			cout<<"Top :" <<p.top()<<endl;
		}
		else if (menu == 5)
		{
			cout<< "Size :"<<p.size();
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
