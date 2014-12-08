#include <iostream>
using namespace std;

void main()
{
	int v[5] {0};
	int i = 5;

	do
	{
		cout << (v[0] + v[1] + v[2] + v[3] + v[4]) / 5 << " km/h" << endl;
		if (i >= 4)
			i = 0;
		else
			i++;

		cout << "Anna nopeus: ";
		cin >> v[i];
	} while (!(v[i] < 0));
}

