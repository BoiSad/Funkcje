#include<iostream>
using namespace std;

bool liczba(int a)
{
	if (a < 2)
		return false;

	for (int i = 2; i * i <= a; i++)
		if (a % i == 0)
			return false;
	return true;
}

int main()
{
	int a;

	cout << "Podaj liczbe: ";
	cin >> a;

	if (liczba (a) == 1)
		cout << a << " jest liczba pierwsza" << endl;
	else
		cout << a << " nie jest liczba pierwsza" << endl;

	return 0;
}