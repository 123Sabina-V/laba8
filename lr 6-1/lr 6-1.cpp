#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;
int main()
{
	int x, n = 10;
	cout << "Enter x=";
	cin >> x;
	float rez;
	int sum = 0;
	for (int k = 1; k < 11; k++)
	{
		sum = sum + k;
	}
	rez = (pow(x, 2)) / (pow(x, 2) + 2) + sum;
	cout << rez << endl;
	system("pause");
	return 0;
 }