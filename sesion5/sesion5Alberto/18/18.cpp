/*
Una compa��a a�rea establece el precio del billete como sigue: en primer lugar se
fija una tarifa base de 150 euros, la misma para todos los destinos. Si el destino est�
a menos de 200 kil�metros, el precio final es la tarifa inicial. Para destinos a m�s de
200 Km, se suman 10 c�ntimos por cada kil�metro de distancia al destino (a partir
del Km 200). En una campa�a de promoci�n se va a realizar una rebaja lineal de 15
euros a todos los viajes. Adem�s, se pretenden a�adir otras rebajas y se barajan las
siguientes alternativas de pol�ticas de descuento:
a) Una rebaja del 3% en el precio final, para destinos a m�s de 600Km.
b) Una rebaja del 4% en el precio final, para destinos a m�s de 1100Km. En este
caso, no se aplica el anterior descuento.
c) Una rebaja del 5% si el comprador es cliente previo de la empresa.
Cree un programa para que lea el n�mero de kil�metros al destino y si el billete corresponde
a un cliente previo de la empresa. Calcular el precio final del billete con las
siguientes pol�ticas de descuento:
 Aplicando c) de forma adicional a los descuentos a) y b)
Gui�n de Pr�cticas. Fundamentos de Programaci�n RP-II.6
 Aplicando c) de forma exclusiva con los anteriores, es decir, que si se aplica c),
no se aplicar�a ni a) ni b)
*/



#include<iostream>

using namespace std;

int main(){
	
	double precio_billete;
	const int TARIFA_BASE=150;
	const double REBAJA_3 = 1.03;
	const double REBAJA_4 = 1.04;
	const double REBAJA_5 =1.05;
	const double AUMENTO=0.10;
	const double LIMITE=200;
	const double REBAJA_PROMOCION=15;
	double destino;
	double diferencia;
	char cliente;

	cout << "Introduce distancia del destino:" << endl;
	cin >> destino;

	cout << "Es ud. cliente previo de la empresa. Introduzca S en caso afirmativo: " << endl;
	cin >>cliente;
	if(destino<LIMITE){
		precio_billete=TARIFA_BASE;
	}else{
		diferencia = destino - LIMITE;
		precio_billete = (diferencia * AUMENTO) + TARIFA_BASE;
		precio_billete-=REBAJA_PROMOCION;
		if(destino>600){
			precio_billete *=REBAJA_3;
		}else if(destino>1100){
			precio_billete*=REBAJA_4;
		}
	}
	if(cliente=='S')
		precio_billete*=REBAJA_5;

	cout << "precio final del billete: " << precio_billete << endl;
}
	

