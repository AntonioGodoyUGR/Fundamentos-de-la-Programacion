/*
Escribir un programa que permita pasar de grados Celsius a grados Fahrenheit (F),
Kelvin (K) o Rankine (R). El programa pedir� primero los grados Celsius y despu�s a
qu� escala queremos convertirlo (opciones F, K o R). Tras el c�lculo, mostrar� el
resultado en pantalla.
Las ecuaciones para realizar el cambio de escala son:
[�F] = [�C] � 9/5 + 32
[�K] = [�C] + 273.15
[�R] = [�C] � 9/5 + 491.67
*/
#include<iostream>

using namespace std;

int main(){
	double celsius;
	double grados;
	char caracter;
	cout << "Introduzca los grados celsius: " << endl;
	cin >> celsius;

	cout << "�A qu� escala quieres convertirlo? Fahrenheit F, Kelvin K, Rankine R" << endl;
	cin >> caracter;
	
	switch(caracter){
		case 'F':
			grados=celsius * 9/5 + 32;
			break;
		case 'K':
			grados=celsius + 273-15;
			break;
		case 'R':
			grados=celsius * 9/5 + 491.67;
			break;
	}

	cout << "Grados finales: " << grados << endl;
}

