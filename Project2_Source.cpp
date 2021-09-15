/*
MVT (Multiprogramming with a Variable number of Tasks) is the
memory management technique in which each job gets just the amount of memory it needs. That is, the
partitioning of memory is dynamic and changes as jobs enter and leave the system
*/
#include<iostream>
using namespace std;
int main()
{
	int ms, mp[10], i, temp, n = 0;
	char ch = 'y';

	cout << "\nEnter the total memory available (in Bytes)-- " << endl;
	cin >> ms;
	temp = ms;
	for (i = 0; ch == 'y'; i++, n++)
	{
		cout << "\nEnter memory required for process " << (i + 1) << " (in Bytes)" << endl;
		cin >> mp[i];
		if (mp[i] <= temp)
		{
			cout << "\nMemory is allocated for Process " << (i + 1) << endl;
			temp = temp - mp[i];
		}
		else
		{
			cout << "\nMemory is Full" << endl;
			break;
		}
		cout << "\nDo you want to continue(y/n) -- " << endl;
		cin >> ch;
	}
	cout << "\n Total Memory Available " << ms << endl;
	cout << "\nPROCESS \t MEMORY ALLOCATED " << endl;
	for (i = 0; i < n; i++)
	{
		cout << "\n" << " " << i + 1 << " \t" << mp[i] << endl;
	}
	cout << "Total Memory Allocated is " << ms - temp << endl;
	cout << "Total External Fragmentation is " << temp << endl;
	cout << "Enter to x to exit\n" << endl;
	cin >> ch;
	if (ch == 'x') 
	{
		return 0;
	}
}