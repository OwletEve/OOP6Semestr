#include"Queue.h"
#include"QueueTemp.h"
#include"iostream"
#include"conio.h"
using namespace std;


	void main()
	{
		setlocale(LC_ALL, "Rus");
		QuTemp <double> queue(10);

		for (int i = 1; i < 5; i++)
			queue.Push((int)(i + 2));

		cout << queue << "\n";
		cout << queue.Pop() << "\n";

		for (int i = 1; i < 5; ++i)
			queue.Push((int)(i + 1));
		cout << queue << "\n";
		system("pause");
	}