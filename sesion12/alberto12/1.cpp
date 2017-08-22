/*
Tenga en cuenta la observaci�n al inicio de esta relaci�n
de problemas sobre la lectura de los caracteres. Para poder leer caracteres, incluyendo
los espacios en blanco, hay que usar caracter = cin.get(), en vez de
cin >> caracter.
Implemente algoritmos para realizar las siguientes tareas:
a) Comprobar si el vector es un pal�ndromo, es decir, que se lee igual de izquierda a
derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} ser�a
un pal�ndromo, pero {'a','c','b','a'} no lo ser�a. Si la secuencia tiene un
n�mero impar de componentes, la que ocupa la posici�n central es descartada,
por lo que {'a','b','j','b','a'} ser�a un pal�ndromo.
b) Invertir el vector. Si �ste conten�a, por ejemplo, los caracteres
{'m','u','n','d','o'}, despu�s de llamar al m�todo se quedar� con
{'o','d','n','u','m'}.
*/

#include<iostream>

using namespace std;


class SecuenciaCaracteres{
	private:
		static const int MAX=100;
		int n;
		char vector[MAX];
	public:
		
		void Set(int pos,int valor){
			pos=valor;
		}
		
		int Getn(){
			return n;
		}
		
		bool Es_palindromo(){
			bool palindromo=true;
			for(int i=0; i<n/2; i++){
				if(vector[i]!=vector[n-i-1])
					palindromo=false;	
			}
			return palindromo;
		}
		
		SecuenciaCaracteres Invierte(){
			int contador=0;
			SecuenciaCaracteres salida;
			for(int i=MAX; i>=0; i--){
				salida.vector[contador]=vector[i];
				contador++;
			}
			return salida;
		}
		
		int Lleno(){
			return n==MAX;
		}
		
		void Aniade(char caracter) {
			if(n<MAX)
				vector[n] = caracter;
				n++;
		}
};
int main(){
	
	const char TERMINADOR = '#';
	SecuenciaCaracteres vector;
	
	cout << "Introduzca una secuencia: " << endl;
	char lectura = cin.get();
	
	while(lectura!=TERMINADOR && !vector.Lleno()){
		vector.Aniade(lectura);
		lectura = cin.get();
	}
	
	bool es = vector.Es_palindromo();
	
	if(es)
		cout << "Es pal�ndromo " << endl;
	else
		cout << "No es pal�ndromo " << endl;
}
