/*
En el ejercicio 24 de la Relaci�n de Problemas II, se ped�a leer un n�mero en un rango.
Defina una funci�n ???�?t|???? para este prop�sito. Para ello, dicha funci�n debe
ir leyendo n�meros enteros (de tipo ??t) desde la entrada por defecto, hasta que se
lea un valor correcto que pertenezca al rango ????? ???? (no hay ning�n l�mite en
el n�mero de intentos). La funci�n devolver� dicho valor.
Escriba un peque�o programa de prueba que lea dos n�meros cualesquiera ??? y
???. Supondremos que el valor introducido de ??? es correcto, es decir, que ser�
mayor o igual que ???. A continua
*/

#include<iostream>

using namespace std;

int LeeIntRango(int min, int max){

	int numero=0, contador_aciertos=0;
	const int ACIERTOS=3;
	int suma=0;
	
	do{
		cout << "Introduzca n�meros entre el m�nimo y el m�ximo: " << endl;
		cin >> numero;
	
		if(numero>=min || numero<=max){
			suma+=numero;
			contador_aciertos++;
		}
	}while(contador_aciertos<ACIERTOS);
	
	return suma;
}

int main(){
	
	int min, max;
	int total;
	
	cout << "Introduce m�nimo y m�ximo: " << endl;
	cin >> min >> max;
	
	total=LeeIntRango(min, max);
	cout << "Resultado de la suma: " << total << endl;
}
