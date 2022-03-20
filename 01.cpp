#include <iostream>
using namespace std;
//Zad. 1
//Napisz funkcjê o nazwie maksimum(), która bêdzie przyjmowa³a tablicê z liczbami ca³kowitymi oraz rozmiar tej tablicy. 
//Funkcja przeszukuje tablicê i znajdujê oraz zwraca najwiêksz¹ wartoœæ.
int maksimum(int tab[], int n){
	int max = tab[0];
	
	for(int i=1; i<n; i++){
		if(max<tab[i]){
			max=tab[i];
		}
	}
	return max;
}
int main(){
	int a[]={321,231,2312,4,21,3412,34,12};
	
	cout << maksimum (a,8) << endl;
	
	system("pause");
}
