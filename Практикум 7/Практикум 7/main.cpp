#include "Qu.h"
#include "QuArr.h"
#include"iostream"
#include"conio.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	QuArr <double> que(10);

	for (int i = 1; i < 5; i++)
		que.Push((int)(i + 2));

	cout << que << "\n";
	cout << que.Pop() << "\n";

	for (int i = 1; i < 5; ++i)
		que.Push((int)(i + 1));
	cout << que << "\n";
	system("pause");
}