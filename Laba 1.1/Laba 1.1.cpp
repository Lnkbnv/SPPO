
#include <math.h>
#include <iostream>
using namespace std;

float F1(int x)
{
	float result = 0;

	if (x >= 0)
	{
		result = sin(x);
	}
	else
	{
		result = cos(x);
	}
	return 0;
}



int main()
{
	int stop = 0;
	cout << "input stop:";
	cin >> stop;
	for (int i = 0; i < 4; i = i + 1)
	{
		float f = F1(i);
		cout << "i=" << i << ":F1(i)=" << f << endl;
	}
	system("pause");
	return 0;
}