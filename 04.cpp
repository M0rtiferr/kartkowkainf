#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;
//Zad. 4
//Napisz program zawieraj¹cy funkcjê, która generuje i wyœwietla po przecinku 20 liczb ca³kowitych z przedzia³u od 0 do 20, a dodatkowo:
//a)	wyœwietla komunikat o iloœci liczb parzystych oraz nieparzystych,
//b)	oblicza i wyœwietla œredni¹ arytmetyczn¹ z wygenerowanych liczb.
//Wywo³aj tê funkcjê tak, aby by³o widaæ efekt na ekranie.

int a(){
 srand(time(NULL));
 int f=20;
 int licznik=20;
 int licz_parzyste=0;

 int suma=0;
 
 	for(int i=1;i<21; i=i+1){
 		int b=rand()%(f+1);
 		cout << b;
 		cout << ", ";
 		if(b%2==0){
 			licz_parzyste++;
		 }
		 suma=suma+b;
	 }
	cout << endl;
	cout << "Ilosc liczb parzystych: " << licz_parzyste << endl;
	cout << "Ilosc liczb nieparzystych: " << (licznik-licz_parzyste) << endl;
	cout << "srednia: " << (float)suma/f << endl;
	}

	
	
int main(){
	a(); 

	system("pause");
}
