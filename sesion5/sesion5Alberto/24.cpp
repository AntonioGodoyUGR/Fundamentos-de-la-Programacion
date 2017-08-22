/*

Se pide leer dos enteros min y max que representar�n un rango de valores
[min,max]. El primer valor a leer, min, debe ser un n�mero positivo y el segundo
valor max, debe ser mayor que min. El programa ir� leyendo estos dos valores
hasta que el usuario los introduzca correctamente.
Una vez le�dos ambos valores, el programa pedir� otro entero nuevo obligando a que
est� dentro del intervalo [min, max]. Si el usuario introduce m�s de 3 valores fuera
del rango, el bucle terminar� y se mostrar� en pantalla un mensaje indicando que
super� el n�mero de intentos m�ximo. En caso contrario (el usuario introduce un valor
en el rango pedido), se mostrar� en pantalla el resultado de calcular nuevo - min y
max - nuevo.
Debe resolver este
*/

#include<iostream>

using namespace std;


//Separamos entrada y salida con los c�lculos
int Calcula(int valor1, int valor2){
	return valor1-valor2;
}
void Muestra(int min, int max, int nuevo){
	cout << "Nuevo-m�nimo = " << Calcula(nuevo,min) << endl;
	cout << "Max-nuevo = " << Calcula(max,nuevo) << endl;
}


int main(){
	
	int min, max, nuevo;
	int contador=0;
	//Consideramos n�meros positivos a partir del 1
	do{
		cout << "Introduzca valor m�nimo y m�ximo: " << endl;
		cin >> min >> max;
		
		
		cout << "Introduce un n�mero entre el m�nimo y el m�ximo: " << endl;
		cin >> nuevo;
		
		contador++;
		
		if(contador==3){
			cout << "N�mero m�ximo de intentos permitidos " << endl;
			return 0;
		}
		
	}while(min<1 || max<=min || contador>3 || nuevo<=min || nuevo>=max);
	
	Muestra(min,max,nuevo);
	
	return 0;
}
