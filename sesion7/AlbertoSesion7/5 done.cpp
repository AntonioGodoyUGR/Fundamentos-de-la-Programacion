/*
Recupere la soluci�n del ejercicio 4. Defina ahora una funci�n
???�?t????r�??????? para leer un entero mayor o igual que un n�mero dado
(�ste ser� un par�metro a la funci�n). Para ello, dicha funci�n debe ir leyendo
n�meros enteros (de tipo ??t) desde la entrada por defecto, hasta que se lea un valor
correcto que sea mayor o igual que el n�mero especificado. La funci�n devolver�
dicho valor.
Utilice esta funci�n para leer el valor de ??? del ejercicio 4, obligando a que sea mayor
que ???.
*/

#include<iostream>

using namespace std;

int LeeIntMayorIgualQue(int n){
	
	int res;
	
	do{
		cout << "Introduzca un n�mero mayor que " << n << endl;
		cin >> res;
	}while(res<n);
	
	return res;
}

int main(){
	
	const int NUM_DADO=125;
	int res=LeeIntMayorIgualQue(NUM_DADO);
	
	cout << "El resultado es: " << res << endl;
}
