#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;
void rozklad_na_czynniki_pierwsze(int liczba){
	int L, P;
	int d=2;
	L = liczba;

	
	do{
		if(L % d == 0){
			cout << d << ", ";
			L=L/d;
		}else{
			d++;
		}
	}while(L>1);
	cout << endl;
}

int main(){
	int b;
	a:
		cout << "Podaj liczbe" << endl;
		cin >> b;
		rozklad_na_czynniki_pierwsze(b);
		goto a;
	//system("pause");
}
