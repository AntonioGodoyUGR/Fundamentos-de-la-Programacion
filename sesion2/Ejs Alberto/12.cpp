#include<iostream>

using namespace std;

int main(){
	
	double poblacion;
	double natalidad , mortalidad, migracion;
	int anio1;
	int anio2;
	int anio3;
	
	cout << "Introduce poblaci�n inicial: " << endl;
	cin >> poblacion;
	
	cout << "Introduce tasa de natalidad: " << endl;
	cin >> natalidad;
	
	cout << "Introduce tasa de mortalidad: " <<endl;
	cin >> mortalidad;
	
	cout << "Introduce tasa de migraci�n: " << endl;
	cin >> migracion;
	
	//Hacemos los c�lculos correspondientes a cada a�o
	/*
	El ejemplo de prueba no est� bien ya que la tasa de mortalidad se debe restar y no sumar
	*/
	anio1 = poblacion + (natalidad/1000)*poblacion - (mortalidad/1000)*poblacion + (migracion/1000)*poblacion;
	cout << anio1 << endl;
	anio2 = anio1 + (natalidad/1000)*anio1 - (mortalidad/1000)*anio1 + (migracion/1000)*poblacion;
	anio3 = anio2 + (natalidad/1000)*anio2 - (mortalidad/1000)*anio2 + (migracion/1000)*poblacion;
	
	cout << "A los 3 a�os la poblaci�n ser� de: " << anio3 << " habitantes." << endl;
	/*
	
	//Para no repetir c�digo hacemos bucle do-while;
	
	int total;
	int contador=0;
	
	do{
		total = poblacion + (natalidad/1000)*poblacion - (mortalidad/1000)*poblacion + (migracion/1000)*poblacion;
		poblacion = total;
		contador++;
	}while(contador<3);
	
	cout << poblacion << endl;
	
	*/
}
