#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;
//Zad. 2
//Napisz program zawieraj�cy funkcj� symuluj�c� rzut kostki do gry (po wywo�aniu funkcji zwraca ona warto��, nie przyjmuje parametr�w).
// Wywo�aj t� funkcj� tak, aby by�o wida� efekt na ekranie.

int kostka(){
	srand(time(NULL));
	int q=6, p=1;
	cout << p+rand()%(q-p+1) << endl;
}
int main(){
	kostka();

	system("pause");
}
