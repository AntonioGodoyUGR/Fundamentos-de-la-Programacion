/* 
Diremos que un n�mero entero positivo es secuenciable si se puede generar como
suma de n�meros consecutivos (al menos dos). Por ejemplo, 6 = 1+2+3, 15 = 7+8.
Esta descomposici�n no tiene por qu� ser �nica. Por ejemplo, 15 = 7+8 = 4+5+6 =
1+2+3+4+5. Escriba un programa que lea un entero n  1 e imprima todas las
descomposiciones posibles. En este ejercicio puede mezclar operaciones de E/S y C
dentro del mismo bucle.
Como curiosidad, los �nicos n�meros con 0 descomposiciones son las potencias de
2.
*/

#include <iostream>
#include <cmath>
using namespace std;


void Secuenciable(int numero){
	
	int suma=0, j;
	
	for(int i=1; i<numero; i++) {
			for(j=i; suma<numero; j++) {
				suma += j;
			}
			if(suma == numero){				
				for(int k=i; k<j; k++) 
					cout << k << " ";	
			
					cout << endl		;
			}
			suma = 0;
		}	
}

int main() {
	
	int numero;
	double log;
	
	do{
		cout << "Introduzca un n� positivo: ";
		cin >> numero;
	}while(numero<1);
	
	log = log2(numero);

	if(numero == pow(2, log)){
		cout << "El n�mero " << numero << " no es secuenciable." << endl;
		
	}else{
		Secuenciable(numero);
	}	
	
	cout << endl;
	return 0;
}
			
