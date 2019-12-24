
#include <iostream>

using namespace std;

int main()
{
	int a, c=0;
	double temp,m=0;

	setlocale(LC_ALL, "Russian");

	cout << "Введите число" << endl;
	cin >> a;
	cout << endl;
	while (a!=0)
	{
		temp = a % 10;
		a = a / 10;
		m = m + temp;
		m = m * 10;
		c++;

	}
	m=m/10;
	cout << m;
}



