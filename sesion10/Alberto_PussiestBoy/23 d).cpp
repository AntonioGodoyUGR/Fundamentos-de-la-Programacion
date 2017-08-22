/*
Pol�tica de acceso a los datos miembros
En vez de usar un m�todo para asignar un valor a cada dato miembro, defina un
�nico m�todo SetCoeficientes para asignar los tres a la misma vez.
Observe que los m�todos permiten definir la pol�tica de acceso a los datos miembro.
Si tengo previsto cambiar por separado los coeficientes de la recta, usar�
m�todos de asignaci�n individuales. En caso contrario, usar� un �nico m�todo
que modifique a la misma vez todos los datos miembro. Incluso pueden dejarse
en la clase ambos tipos de m�todos para que as� el cliente de la clase pueda usar
los que estime oportunos en cada momento. Por ahora, mantenga �nicamente el
m�todo de asignaci�n en bloque SetCoeficientes.
*/

#include<iostream>

using namespace std;

class Recta{
	private:
		double A,B,C;
	
	public:
		
		double Pendiente(){
			return -A/B;
		}
		
		void SetCoeficientes(int valorA, int valorB, int valorC){
			A=valorA;
			B=valorB;
			C=valorC;
		}
		
};

int main(){
	
	Recta r1, r2;
	
	double A,B,C;
	double pendiente1, pendiente2;
	
	cout << "Introduzca puntos de la primera recta: " << endl;
	cin >> A >> B >> C;

	r1.SetCoeficientes(A,B,C);
	
	cout << "Introduzca puntos de la segunda recta: " << endl;
	cin >> A >> B >> C;
	
	r2.SetCoeficientes(A,B,C);

	pendiente1=r1.Pendiente();
	pendiente2=r2.Pendiente();
	
	cout << "Pendiente recta 1: " << pendiente1 << endl;
	cout << "Pendiente recta 2: " << pendiente2 << endl;

}
