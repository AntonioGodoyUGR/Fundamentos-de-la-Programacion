/*

Amplie el ejercicio 12 (Poblaci�n) de la relaci�n de problemas I.
Esta nueva versi�n del programa, adem�s de los datos ya pedidos en dicho ejercicio,
se le pedir� al usuario que introduzca un n�mero de a�os (ser� el �ltimo dato le�do)
Debe leer cada dato con un filtro conveniente. Por ejemplo, las tasas de natalidad,
mortalidad y emigraci�n deben ser enteros entre 0 y 1000, mientras que la poblaci�n
inicial debe ser un entero positivo.
El programa debe calcular e imprimir el n�mero total de habitantes transcurridos dichos
a�os.
Adem�s, el programa tambi�n calcular� el n�mero de a�os que tienen que pasar
hasta que haya, como m�nimo, el doble de la poblaci�n inicial. Imprima dicho n�mero
de a�os, junto con la poblaci�n que habr� pasado ese tiempo.

*/

#include<iostream>

using namespace std;

int main(){
	
	double natalidad , mortalidad, migracion;
	int anios;
	const int MAX = 1000;
	double poblacion;
	
	do{
		cout << "Introduce poblaci�n inicial: " << endl;
		cin >> poblacion;
		
		cout << "Introduce tasa de natalidad: " << endl;
		cin >> natalidad;
		
		cout << "Introduce tasa de mortalidad: " <<endl;
		cin >> mortalidad;
		
		cout << "Introduce tasa de migraci�n: " << endl;
		cin >> migracion;
		
		cout << "Introduzca n�mero de a�os: "  << endl;
		cin >> anios;
	}while(natalidad<0 || natalidad>MAX || mortalidad<0 || mortalidad>MAX || poblacion<0);
	
	int total;
	int contador=0;
	int poblacion_doble=2*poblacion;
	int anios_necesarios_doblar;
	bool doble_superado=false;

	do{
		total = poblacion + (natalidad/1000)*poblacion - (mortalidad/1000)*poblacion + (migracion/1000)*poblacion;
		poblacion = total;
		
		if(poblacion_doble<=poblacion){
			anios_necesarios_doblar=contador;
			doble_superado=true;
		}
		contador++;
		
	}while(!doble_superado && contador<anios);
	
	
	cout << "N�mero de habitantes pasados " << anios << " a�os: " << poblacion << endl;
	cout << "A�os que han de pasar hasta doblar la poblaci�n: " << anios_necesarios_doblar << endl;
	
}

