#include<iostream>

using namespace std;

int main(){
	
	//Declaraci�n de variables
	int numero, unidades, decenas;
	
	//Entrada de datos
	cout << "Introduce un n�mero entero: " << endl;
	cin >> numero;
	
	//Operaciones
	unidades = numero %10;
	numero = numero / 10;
	decenas = numero %10;
	numero = numero /10;
	
	//Salida de datos
	cout << "El n�mero introducido es: " << numero << "  " << decenas << "  " << unidades << endl;
}
	

	
