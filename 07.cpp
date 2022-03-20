#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;

void dzielniki (int liczba){
	for(int i=1; i<=liczba; i++)
	if(liczba % i == 0){
		cout << i <<", ";
	}
	cout << endl;
}

int main(){
	int b;
	a:
		cout << "Podaj liczbe " << endl;
		cin >> b;
		dzielniki(b);
	goto a;
	//system("pause");
}
