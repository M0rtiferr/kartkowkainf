#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;
//Zad. 2
//Napisz program zawieraj¹cy funkcjê symuluj¹c¹ rzut kostki do gry (po wywo³aniu funkcji zwraca ona wartoœæ, nie przyjmuje parametrów).
// Wywo³aj tê funkcjê tak, aby by³o widaæ efekt na ekranie.

int kostka(){
	srand(time(NULL));
	int q=6, p=1;
	cout << p+rand()%(q-p+1) << endl;
}
int main(){
	kostka();

	system("pause");
}
