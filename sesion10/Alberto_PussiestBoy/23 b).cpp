/*
M�todos p�blicos
En vez de calcular la pendiente en el programa principal, vamos a ponerlo como
un m�todo de la clase y as� lo reutilizaremos todas las veces que necesitemos.
A�ada un m�todo para el c�lculo de la pendiente y modifique el main para tener
en cuenta este cambio.
�A�adimos pendiente como dato miembro de la recta? La respuesta es que
no �Por qu�?
A�ada tambi�n los siguiente m�todos:
 Obtener la ordenada (y) dado un valor de abscisa x, aplicando la f�rmula:
(-C -xA) / B
 Obtener la abscisa (x) dado un valor de ordenada y, aplicando la f�rmula:
(-C -yB) / A
En la funci�n main lea un valor de abscisa e imprima la ordenada seg�n la recta.
A continuaci�n lea un valor de ordenada e imprima la abscisa que le corresponde.
H�galo s�lo con la primera recta.
*/

#include<iostream>

using namespace std;

class Recta{
	public:
		double A,B,C;
		
		double Pendiente(){
			return -A/B;
		}
		
		double Get_y(double x){
			return (-C -x*A)/B;
		}
		
		double Get_x(double y){
			return (-C-y*B)/A;
		}
};

int main(){
	
	Recta r1, r2;
	
	double A,B,C;
	double pendiente1, pendiente2;
	double x, y;
	
	cout << "Introduzca puntos de la primera recta: " << endl;
	cin >> A >> B >> C;
	
	r1.A=A;
	r1.B=B;
	r1.C=C;
	
	cout << "Introduzca puntos de la segunda recta: " << endl;
	cin >> A >> B >> C;
	
	r2.A=A;
	r2.B=B;
	r2.C=C;
	
	cout << "Introduzca coordenada x: " << endl;
	cin >> x;
	cout << "Valor y: " << r1.Get_y(x) << endl;
	
	cout << "Introduzca coordenada y: " << endl;
	cin >> y;
	cout << "Valor x: " << r1.Get_x(y) << endl;
	
	
	cout << "Pendiente recta 1: " << r1.Pendiente() << endl;
	cout << "Pendiente recta 2: " << r2.Pendiente() << endl;


}
