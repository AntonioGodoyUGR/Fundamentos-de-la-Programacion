/*
Hacer una funci�n que intercambie dos valores
*/


#include<iostream>

using namespace std;

void Intercambia(int &valor1, int &valor2){
	
	int aux;
	aux=valor1;
	valor1=valor2;
	valor2=aux;
}

int main(){
	
	int n1, n2;
	
	cout << "Introduca dos n�meros: " << endl;
	cin >> n1 >> n2;
	
	Intercambia(n1, n2);
	
	cout << "Valor nuevo 1: " << n1 << " \nValor nuevo 2: " << n2 << endl;
}
