// Selection_Sort(cpp).cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int t[20];
	for (int i = 0; i < 20; i++)
	{
		t[i] = rand() % 100 + 1;
		cout << t[i] << " ";
	}
/*	for (int i = 0; i < 20; i++)
	{
		int k = t[i];
		for (int j = 0; j < 20; j++)
		{
			if (t[j] > k)
			{
				k = j;
				swap(t[j], t[i]);

			}

		}
	}
	//dzia�a ale to nie selection sort
	*/
	int k;
	cout << "\n To sie stanie jak damy swapa w srodku petli xD ";
	for (int i = 0; i <20; i++)
	{
		k = i;
		for (int j = i + 1; j < 20; j++)
		{
			if (t[j] < t[k])
			{
				k = j;
				swap(t[k], t[i]);  // ten swap musi by� jednak poza p�tl� xD
			}
		}

	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << t[i] << " ";
	}
	cout << "\n Prawidlowy seletion sort: ";
	for (int i = 0; i < 20; i++)
	{
		k = i;
		for (int j = i + 1; j < 20; j++)
			if (t[j] < t[k])
				k = j;

		swap(t[k], t[i]);
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << t[i]<< " " ;
	}
	_getch();
	return 0;
}

