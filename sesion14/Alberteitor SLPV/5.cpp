/*
[Descodifica]. (Examen Febrero 2016) Dado un vector de caracteres que contiene un
mensaje cifrado, se pide construir otro vector nuevo con el mensaje descifrado. La
forma de descifrado consiste en coger la primera y �ltima letra de cada palabra. Las
palabras est�n separadas por uno o m�s espacios en blanco o el final del vector. Si
la �ltima palabra no tiene espacios en blanco a su derecha, se coge s�lo el primer
car�cter.
Por ejemplo, si denotamos el inicio y final de la secuencia con un corchete, entonces:
[ Hidr�geno limpia ] se descodificar�a como [Hola]
Reserve memoria para trabajar con un m�ximo de 1000 caracteres.
Para leer el mensaje cifrado debe leer caracteres con cin.get() (repase lo visto al
inicio de esta relaci�n de problemas) hasta que el usuario introduzca el car�cter #. A
continuaci�n, el programa mostrar� la cadena descodificada.
Ejemplo de entrada: [Hidr�geno limpia ] .... Salida correcta: [Hola]
Ejemplo de entrada: [Hidr�geno limpia] .... Salida correcta: [Hol]
Ejemplo de entrada: [Hidr�geno] .... Salida correcta: [H]
Ejemplo de entrada: [Hidr�geno ] .... Salida correcta: [Ho]
Ejemplo de entrada: [H] .... Salida correcta: [H]
Ejemplo de entrada: [H ] .... Salida correcta: [H]
Finalidad: Recorridos sobre un vector. Dificultad Media.
*/

#include<iostream>
#include<string>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAM=1000;
		char vector[TAM];
		int n;
	public:
		
		SecuenciaCaracteres(){
			n=0;
		}
		
		int Getn(){
			return n;
		}
		
		void Set(int pos, char valor){
			vector[pos]=valor;
		}
		
		void Aniade(char valor){
			vector[n]=valor;
			n++;
		}
		
		void Mostrar(){
			for(int i=0; i<n; i++)
				cout << vector[i];
		}
		
		
		void Codificar(){
	
			char codificar[n];
			int x = 0;
			
			for(int i=0; i<n; i++){
				if((vector[i+1] == ' ' || vector[i-1] == ' ' || i == 0) && vector[i] != ' '){
					codificar[x] = vector[i];
					x++;	
				}
			}
			for(int i=0; i<x; i++){
				vector[i]=codificar[i];
			}
			
			vector[x] = '#';
			
			for(int i=0; vector[i]!='#'; i++){
				cout << vector[i];
	}
	
		}
		
			
};
		

int main(){
	SecuenciaCaracteres salida;
	SecuenciaCaracteres secuencia;
	
	const char TERMINADOR = '#';
	char aux;

	cout << "Ingrese una secuencia (" << TERMINADOR << " para terminar): ";
	aux = cin.get();
	
	while (aux != TERMINADOR){
		secuencia.Aniade(aux);
		aux = cin.get();
	}
	
	secuencia.Codificar();
	
}







