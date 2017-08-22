/*
Se quiere calcular la moda de un vector de caracteres, es decir, el car�cter
que m�s veces se repite. Por ejemplo, si el vector fuese
{'l','o','s',' ','d','o','s',' ','c','o','f','r','e','s'}
los caracteres que m�s se repiten son 'o' y 's' con un total de 3 apariciones. La
moda ser�a cualquiera de ellos, por ejemplo, el primero encontrado 'o'.
Para almacenar de forma conjunta el car�cter y la frecuencia usaremos el siguiente
struct:
struct FrecuenciaCaracter{
char caracter;
int frecuencia;
}
El campo caracter contendr� el car�cter en cuesti�n ('o') y en el campo
frecuencia el conteo de la moda (3).
Construya un programa que lea caracteres con cin.get() (repase lo visto al inicio
de esta relaci�n de problemas) hasta que el usuario introduzca el car�cter #. Almacene
todos los valores en un vector de caracteres. A continuaci�n, calcule la moda y
mu�strela en pantalla junto con su frecuencia.
Para calcular la moda, se recomienda que use un vector auxiliar en el que almacene
los caracteres que ya se han procesado en alg�n momento anterior.
*/

#include <iostream>
using namespace std;

struct FrecuenciaCaracter {
	char caracter;
	int frecuencia;
};

class SecuenciaCaracteres{
	private:
		
		static const int MAX = 3000000;
		char secuencia[MAX];
		int n;
		
	public:
		
		int Getn() { 
			return n; 
		}
		
		void Aniade(char caracter){
			if(n<MAX)
				secuencia[n] = caracter;
			n++;
		}
	
		char GetComponente(int i) { 
			return secuencia[i]; 
		}
		
		bool Lleno(){ 
			return (n == MAX); 
		}
		
		FrecuenciaCaracter CalcularModa() {
			
			int ascii[256] = {0};		
			
			for(int i = 0; i < Getn(); i++) {
				int j = GetComponente(i);
				ascii[j]++;
			}
			
			FrecuenciaCaracter fmax;
			fmax.frecuencia = 0;
			 
			for(int i = 0; i < 256; i++) {
				if(ascii[i] >= fmax.frecuencia) { 
					fmax.caracter = i;
					fmax.frecuencia = ascii[i];
				}
			}
			return fmax;
		}		
			
};

int main(){
	
	const char TERMINADOR = '#';
	SecuenciaCaracteres vector;
	FrecuenciaCaracter frecuenciamax;
	cout << "Introduzca una secuencia: " << endl;
	char lectura = cin.get();
	
	while(lectura!=TERMINADOR && !vector.Lleno()){
		vector.Aniade(lectura);
		lectura = cin.get();
	}
	frecuenciamax = vector.CalcularModa();
	
	cout << "El car�cter m�s repetido es " << frecuenciamax.caracter << " que se repite " << frecuenciamax.frecuencia << " veces" << endl;
	
}
	
