/*
Supondremos que s�lo hay tres empleados y que est�n identificados con un c�digo
(1, 2 y 3). Adem�s, el salario por hora es el mismo para todos los empleados. �ste
ser� el primer valor que se leer� (de tipo double) Despu�s de haber le�do este dato,
se leer�n los datos de los casos atendidos por los empleados en el siguiente orden:
en primer lugar, el c�digo del empleado, a continuaci�n el n�mero de segundos que
ha durado la atenci�n telef�nica, en tercer lugar un 1 si el caso se resolvi� de forma
satisfactoria y un 0 en caso contrario; finalmente, un valor entero entre 0 y 5 con el
grado de satisfacci�n del usuario.
Cuando nos encontremos el terminador -1 como primer dato (c�digo del empleado)
se detendr� la introducci�n de datos. Supondremos que siempre se introduce al menos
el primer valor (el salario), pudiendo ser ya el siguiente dato le�do el terminador.								
*/

#include <iostream>

using namespace std;

int main(){
	
	
	double salario_hora;
	int  empleado, contador = 0, contador1, contador2, contador3, media1, media2, media3, segundos;
	bool atencion;
	const int TERMINADOR = -1;
	double grado_satisfaccion;
	
	cout << "Introduzca el salario por hora de los 3 empleados (1, 2 y 3): ";
	cin >> salario_hora;
		
	empleado = 0;
	
		do{
			
			cout << "Introduzca el c�digo del empleado (1, 2 � 3): ";
			cin >> empleado;
			
			if(empleado != TERMINADOR){
				do{
				cout << "Introduzca el n� de segundos que ha durado la atenci�n telef�nica: ";
				cin >> segundos;
				} while(segundos < 0);
				
				do{
				cout << "Si el caso se resolvi� de forma satisfactoria introduzca un 1, sino introduzca un 0: ";
				cin >> atencion;
				} while(atencion !=0 && atencion !=1);
				
				do{
					cout << "Introduzca el grado de satisfacci�n del usuario (de 0 a 5): ";
					cin >> grado_satisfaccion;
				} while(grado_satisfaccion > 5 || grado_satisfaccion < 0);
				
				if(empleado == 1){
				contador1++;
				media1 = (media1 + grado_satisfaccion)/contador1;
				}
				if(empleado == 2){
				contador1++;
				media1 = (media2 + grado_satisfaccion)/contador2;
				}
				if(empleado == 3){
				contador1++;
				media1 = (media3 + grado_satisfaccion)/contador3;
				}
				contador++;
			}else
				cout << "Fin de entrada de datos." << endl;
		}while(empleado!=TERMINADOR);
	
	
		
		if((media1 > media2) && (media1>media3))
			cout << contador << "	" << 1 << "	" << media1;
		else if((media2 > media1) && (media2>media3))
			cout << contador << "	" << 2 << "	" << media2;
		else if((media3 > media2) && (media3>media1))
			cout << contador << "	" << 3 << "	" << media3;
	system("pause");
}
