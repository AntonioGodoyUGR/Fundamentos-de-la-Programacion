/*
En el ejercicio 13 de la Relaci�n de Problemas I se ped�a escribir un programa que
leyese un valor entero de tres d�gitos e imprimiese los d�gitos separados por un espacio
en blanco. Haga lo mismo pero para un n�mero entero arbitrario. Por ejemplo, si el
n�mero es 3519, la salida ser�a:
3 5 1 9
*/
#include<iostream>

using namespace std;

int main(){
	
	int numero;
	const int MAX=100;
	int vector[MAX];
	int i=0;
	
	cout << "Introduzca un n�mero: " << endl;
	cin >> numero;
	
	while(numero>0){
		vector[i]=numero%10;
		numero=numero/10;
		i++;
	}

	for(int j=i-1 ;j>=0;j--){
		cout << vector[j] << " " ;
	}
}
