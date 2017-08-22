/*
Recupere la soluci�n del ejercicio 10 (funci�n gaussiana) de la relaci�n de problemas
I. Se pide construir un programa para imprimir el resultado de aplicar dicha funci�n a
varios valores de abscisas.
En primer lugar, se leer�n los par�metros que definen la funci�n, es decir, la esperanza
y la desviaci�n. La esperanza puede ser cualquier valor, pero para leer el valor de
desviaci�n debe utilizar un bucle y obligar a que sea mayor o igual que cero.
A continuaci�n el programa pedir� un valor minimo, un valor maximo y un
incremento. El valor maximo ha de leerse con un filtro de entrada obligando a que
sea mayor que minimo. El programa mostrar� el valor de la funci�n gaussiana en
todos los valores de x (la abscisa) entre minimo y maximo a saltos de incremento,
es decir, minimo, minimo + incremento, minimo + 2*incremento,    , hasta
llegar, como mucho, a maximo.
12 <- Media
5 <- Desviaci�n
2 <- M�nimo
3 <- M�ximo
0.5 <- Incremento
*/

#include<iostream>
#include<cmath>

using namespace std;


int main(){
	
	const double PI=3.141759;
	
	//Declaraci�n de las variables
	double esperanza;
	double desv_tipica;
	double gaussiana;
	int minimo, maximo;
	double incremento;
	
	//Entrada de datos
	cout << "Introduzca valor de la esperanza: " << endl;
	cin >> esperanza;
	
	do{
		cout << "Introduzca valor de la desviaci�n t�pica: " << endl;
		cin >> desv_tipica;
	}while(desv_tipica<0);
	
	cout << "Introduce el valor m�nimo: " << endl;
	cin >> minimo;
	do{
		cout << "Introduce el valor m�ximo: " << endl;
		cin >> maximo;
	}while(maximo<=minimo);
	
	cout << "Introduce incremento: " << endl;
	cin >> incremento;
	
	do{
		gaussiana = 1/(desv_tipica*sqrt(2*PI))*exp(-0.5*pow(((minimo-esperanza)/desv_tipica),2));  
		cout << gaussiana << "  " ;
		minimo+=incremento;
	}while(minimo<maximo);
	
	
}
