#include "Qu.h"
#include "QuArr.h"
#include"QuUnDirList.h"
#include"QuBiDirList.h"
#include "Factory.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 10;
	//"Стратегия"
	Qu<int> que;
	QuArr<int> que1(n);
	QuUnDirList<int> que2(n);
	QuBiDirList<int> que3(n);
	que.setStrategy(&que1);
	que.Push(2);
	que.Push(5);
	cout << que.Pop() << "\n";
	cout << que.Peek() << "\n";
	que.setStrategy(&que2);
	que.Push(3);
	que.Push(6);
	cout << que.Pop() << "\n";
	cout << que.Peek() << "\n";
	que.setStrategy(&que3);
	que.Push(8);
	que.Push(1);
	cout << que.Pop() << "\n";
	cout << que.Peek() << "\n";
	delete &que;

	//"Фабричный метод"

	CreateQuArr<int> Creator1;
	CreateQuUnDirList<int> Creator2;
	CreateQuBiDirList<int> Creator3;
	Create<int> *creators[3] = { &Creator1, &Creator2, &Creator3 };

	for (int i = 0; i < 3; i++)
	{
		Stor<int> *que = creators[i]->factor(n);
		que->Push(4);
		que->Push(7);
		cout << que->Pop() << "\n";
		cout << que->Peek() << "\n";
		delete que;
	}
}