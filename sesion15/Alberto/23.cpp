/*
(Examen Febrero 2013) Se quiere trabajar con una imagen
que se representar� como una tabla de datos en el que todas las filas tienen el
mismo n�mero de columnas y los datos son de tipo int. Esta clase se llamar�
ImagenBlancoNegro y contendr� valores enteros que representan un nivel de gris
(0 ser�a negro y 255 blanco).
Para implementar esta clase se recomienda que se use como dato miembro privado
una matriz de enteros. La clase proporcionar�, como m�nimo, el siguiente constructor
y m�todos:
// Constructor en el que se fija el n�mero de filas
// y columnas que contendr� la imagen.
// Inicializa todas las componentes a 0.
ImagenBlancoNegro(int numero_filas, int numero_columnas)
// Devuelve el valor de la casilla (fil, col)
int Pixel(int fil, int col)
// Modifica la casilla (fil,col)
void Modifica(int fil, int col, int nuevo)
Se supone que todos los valores deben ser positivos aunque por problemas de captaci�n
y registro algunos de ellos son negativos. Es preciso corregir estos valores
err�neos y se propone sustituirlos por el valor promedio (la media aritm�tica truncada
a entero) de sus ocho vecinos m�s cercanos espacialmente (arriba, abajo, izquierda,
derecha y las cuatro esquinas adyacentes). Este es el m�todo conocido como Mean
Filter for Smoothing .
Debe considerar que entre estos vecinos pudiera haber valores negativos, y en este
caso no intervendr�n en el c�lculo del valor promedio:
Si hubiera un s�lo valor negativo en la vecindad, se sumar�n los valores de
los 7 vecinos v�lidos y la suma se dividir� entre 7. Si hubiera dos valores
negativos en la vecindad, se sumar�n los valores de los 6 vecinos v�lidos y
la suma se dividir� entre 6. . . . Si no hubiera ning�n valor v�lido, se sustituir�
por un cero.
Implemente un m�todo para que dada una imagen, devuelva otra imagen corregida.
La imagen original no se modifica.
Para la implementaci�n debe considerar:
a) El algoritmo debe ser simple y claro.
b) Para simplificar el problema, las casillas de los bordes no se modifican, aunque
s� se usan para efectuar las correcciones oportunas. En definitiva, la primera y
la �ltima fila as� como la primera y la �ltima columna son iguales entre la matriz
original y la corregida (por lo que podr�an quedar valores negativos en estas
posiciones).
Cree un programa principal de prueba que lea el tama�o de la imagen (filas y columnas)
y los datos correspondientes. El programa debe construir la imagen suavizada e
imprimir el resultado en pantalla.
*/


#include<iostream>

using namespace std;

class ImagenBlancoNegro{
	private:
		static const int TAM=100;
		int matriz[TAM][TAM];
		int util_fils;
		int util_cols;
	public:
		
	
		
		ImagenBlancoNegro(int num_fils, int num_cols){
			util_fils=num_fils;
			util_cols=num_cols;
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					matriz[i][j]=0;
				}
			}
		}
		
		int Pixel(int fil, int col){
			return matriz[fil][col];
		}
		
		void Modifica(int fil, int col, int nuevo){
			matriz[fil][col]=nuevo;
		}
		
		bool CasillaValida(int i, int j){
			return (i>0 && i<util_fils-1 && j>0 && j<util_cols-1);
		}
		
		
		
		int CalculaValorAlrededor(int fil, int col){
			
			int valor=0;
			int contador=0;
			
			for(int i=fil-1; i>fil+1; i++){
				for(int j=col-1; j>col+1; j++){
					if(CasillaValida(i,j)){
						valor+=matriz[i][j];
						contador++;
					}
				}
			}
			valor/=contador;
			return valor;
		}
		
		
						
		
		ImagenBlancoNegro Modifica(ImagenBlancoNegro salida){
			
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					if(matriz[i][j]<0){
						salida.Modifica(i,j,CalculaValorAlrededor(i,j));
					}
				}
			}
			
			return salida;
		}
		
		void Mostrar(){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					cout << matriz[i][j] << " ";
				}
				cout << endl;
			}
		}
};


int main(){
			
	
	int fils, cols;
	int valor;
	
	cout << "Introduce filas y columnas: " << endl;
	cin >> fils >> cols;
	
	ImagenBlancoNegro imagen(fils,cols);
	ImagenBlancoNegro salida(fils,cols);
	
	for(int i=0; i<fils; i++){
		for(int j=0; j<cols; j++){
			cout << "Introduzca valor " << i << "," << j << ": ";
			cin >> valor;
			imagen.Modifica(i,j,valor);
			salida.Modifica(i,j,valor);
		}
	}
	
	imagen.Modifica(salida);
	
	
	salida.Mostrar();
	
		
}
