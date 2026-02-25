#include <iostream>

using namespace std;

int main()
{
	int Number1 = 0;
	int Number2 = 0;
	int Number3 = 0;
	int Number4 = 0;

	for (int i = 1; i < 101; i++)
	{
		Number1 = Number1 + i;
	}
	for (int i = 1; i < 101; i++)
	{
		if (i % 2 == 0)
		{
			Number2 = Number2 + i;
		}
	}
	for (int i = 1; i < 101; i++)
	{
		if (i % 2 == 1)
		{
			Number3 = Number3 + i;
		}
	}
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			Number4 = Number4 + i;
		}
	}
	
	cout << Number1 << endl;
	cout << Number2 << endl;
	cout << Number3 << endl;
	cout << Number4 << endl;

	return 0;

}