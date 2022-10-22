#include <iostream>

//#include <conio.h>

using namespace std;
// 1.crear un vector de 10 numeros y muestre los numeros par y su posici�n
int main()
{
	setlocale(LC_ALL, "");
	int arreglo[10];
	int i = 0, par = 0, posicion = 0;
	cout << "<<Bienvenido al programa  por favor ingrese 10 numeros " << endl;
	// ciclo para preguntarle al usuario los numeros;
	for (i = 0; i < 10; i++)
	{
		cout << "Ingrese el n�mero: " << i + 1 << "\n";
		cin >> arreglo[i];
	}
	// ciclo para evaluar numeros par
	for (i = 0; i < 10; i++)
	{

		if (arreglo[i] % 2 == 0)
		{
			par = par + 1;
			cout << "Los  numeros par son:" << par;
		}
		else
		{
			cout << "lo sentimos no hay numeros par ";
		}
	}
}
