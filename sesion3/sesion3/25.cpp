/*
Construya un programa que lea un car�cter (supondremos que el usuario introduce
una may�scula), lo pase a min�scula y lo imprima en pantalla. H�galo sin usar las
funciones toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
la relaci�n que hay en C++ entre los tipos enteros y caracteres.
*/

#include<iostream>

using namespace std;

int main(){
	
	/*
	Calculamos la diferencia del valor de 'a' y 'A' en la tabla ascii
	y se lo sumamos a la letra inicial para pasarla a min�scula
	*/
	const int DIFERENCIA='a'-'A';
	char letra;
	char letra_min;
	
	cout << "Introduzca una letra: " << endl;
	cin >> letra;
	
	letra_min = letra+DIFERENCIA;
	cout << letra_min << endl;
}
