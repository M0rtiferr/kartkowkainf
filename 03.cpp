#include <iostream>
#include <cstdlib> // rand(), RAND_MAX
#include <ctime> // time(NULL)
using namespace std;
//Zad. 3
//Napisz program zawieraj¹cy funkcjê, która generuje i wyœwietla 10 liczb rzeczywistych z przedzia³u od 0 do 1. 
//Wywo³aj tê funkcjê tak, aby by³o widaæ efekt na ekranie.

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
