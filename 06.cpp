#include <iostream>

void dzielniki(int liczba) {

	cout << "Dzielniki liczby " << liczba << " to : 1, ";
	for (int i = 2; i <= (liczba / 2); i++)
	{
		if (liczba % i == 0) {//funkcja wypisuje daną liczbę jeśli dzieli argument bez reszty
			cout << i << ", ";
		}
	}
 	cout << liczba << ";" << endl;
}

int main()
{
	int liczba;
	cout << "Podaj liczbe ";

	cin >> liczba;
	if (liczba <= 0) {
		cout << "Liczba musi byc naturalna!";
	}
	else {
		dzielniki(liczba);
	}

	return 0;
}


