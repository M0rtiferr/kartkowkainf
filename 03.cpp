#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;
//Zad. 3
//Napisz program zawieraj�cy funkcj�, kt�ra generuje i wy�wietla 10 liczb rzeczywistych z przedzia�u od 0 do 1. 
//Wywo�aj t� funkcj� tak, aby by�o wida� efekt na ekranie.

float a(){
	srand(time(NULL));
	for(int i=1;i<=10;i++){
	
	cout << ((float) rand() / RAND_MAX) << endl;
}
}		

int main(){
	a();  

	system("pause");
}
