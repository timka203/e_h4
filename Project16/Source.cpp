#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
template <typename t>
int  func2(t a[], int n, int h)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 255;
		if (a[i] > h)
			c++;
		printf("%d \n", a[i]);
	}
	printf("-------------\n");
	return c;
}

void task2()
{
	int a[10] = { 0 };
	char c[10] = { 0 };
	int h;
	int f;
	cin >> f;
	cin >> h;
	switch (f)
	{
	case 1:cout << func2(a, 10, h); break;
	case 2:cout << func2(c, 10, h); break;
	default:
		break;
	}
}
template <typename t>
void func(t c[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		c[i] = t(1 + rand() % 100);
		cout << c[i] << endl;
	}
	printf("--------\n");
	for (int i = n-1; i >-1; i--)
	{
		cout << c[i] << endl;
	}
}
void task1()
{
	int a[10] = { 0 };
	char c[10] = { 0 };
	int f;
	cin >> f;
	switch (f)
	{
	case 1:func(a, 10); break;
	case 3:func(c, 10); break;
	default:
		break;
	}
 }

int main()
{  
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}