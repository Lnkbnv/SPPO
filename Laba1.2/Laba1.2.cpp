#include<cstdlib> 
#include<iostream> 
#include<math.h> 
using namespace std;

float F1(int& x)
{
	float result;
	if (x >= 0)
	{
		result = sin(x);
	}
	else
	{
		result = cos(x);
	}
	return result;
}
void F2(int& x)
{
	x = F1(x);
}


int main()
{
	int N;
	cin >> N;
	for (int i = -3; i < N; i++)
	{
		float f = F1(i);
		cout << "i=" << i << "; F1(i)=" << f << endl;
	}
	cout << " " << endl;
	for (int i = -3; i < N; i++)
	{
		cout  "i=" << i << ";";
		F2(i);
		cout << "i=" << i << endl;
	}
	system("pause>null");
	return 0;
}
