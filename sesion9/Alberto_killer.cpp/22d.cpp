/*
Hacer la sucesi�n de Fibonacci con una funci�n recursiva
*/

#include<iostream>

using namespace std;

#include<iostream>
using namespace std;

int Fibonacci(int n)
{
   if(n==0 || n==1)
      return n;
   else
      return fibo(n - 2) + fibo(n - 1);
}

int main(){
	
	int n;
	
	cout << "Introduzca n�mero n de la sucesi�n: " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		cout << fibo(i) << " " ;
	}
}
	
