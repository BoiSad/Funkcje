#include <iostream>
using namespace std;

void zamiana(int liczba)
{
	int i = 0, tab[31];

	while (liczba)
	{
	tab[i++] = liczba % 2;
	liczba /= 2;
	}
	for (int j = i - 1; j >= 0; j--)
	cout << tab[j];
}

int main()
{
	int liczba;

	cout << "Podaj liczbe jaką chcesz zamieni: ";
	cin >> liczba;

	cout << liczba << " postać binarna tej liczby to: ";
	zamiana(liczba);
	cout << endl;

	return 0;
}