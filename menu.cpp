// archivo para mostrar y sumar
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
string hamburguesa;
int seleccionPedido;
void mostrar()
{
	string hamburguesa[] = {
			"SENCILLA",
			"10.000",
			"Carne de hamburguesa, cebolla, lechuga, tomates,\t\t\tUna salchicha ranchera, huevo doble de codorniz,queso sahaddai, salsas y huevo de codorniz.",
			"DOBLE",
			"18.000",
			"Doble carne de hamburguesa, cebolla, lechuga y tomates,\t\t doble salchicha ranchera,  triple Huevos de codorniz,  doble queso sahaddai, salsas y huevo doble de codorniz.",
			"SENCILLA",
			"8.000",
			"picada de papa, Queso sahaddai, salsas y cebolla.",
			"DOBLE",
			"12.000",
			"Picada de papa,doble Queso sahaddai, salsas y cebolla.",
	};
	string salchipapa[] = {
			"RANCHERA",
			"12.000",
			"Papa,salchicha ranchera,tocineta,\n huevo de codorniz, queso shaddai, salsas",
			"ESPECIAL",
			"18.000",
			"Papa,salchicha,carne desmechada,tocineta,\nhuevo de codorniz,queso shaddai, salsas",
	};
	string gaseosa[] = {"personal 400 ml", "2.000", "mediana 1.5L", "6.500", "grande 3L", "10.200"};
	cout << "\t\t\t--------- BIENVENIDOS A LA DELICIAS ---------\n\n";
	cout << "\t\t\t\t\t\t----MENU----\n\n";
	cout << "  ---- HAMBURGUESAS ---- \t\t\t\t\t\t  ---- PERROS ---- \n"; // primer producto
	for (int i = 0; i < 10; i++)
	{ // filas
		for (int j = 0; j < 12; j++)
		{ // columnas
			if (i == 0 && j == 0)
			{																	// inicio de mostrar en pantalla
				cout << hamburguesa[0] << "\t"; // sencilla hamburguesas
			}
			else if (i == 0 && j == 1)
			{
				cout << hamburguesa[1] << "\t\t\t\t\t\t\t"; // precio
			}
			else if (i == 1 && j == 0)
			{
				cout << hamburguesa[2] << "\t\t\t\t"; // descripcion
			}
			else if (i == 1 && j == 2)
			{
				cout << "\n--------------------------------\t\t\t\t------------------------------------------------------ \n";
				cout << hamburguesa[3] << "\t\t"; // doble
			}
			else if (i == 1 && j == 4)
			{
				cout << hamburguesa[4] << "\t\t\t\t\t\t\t"; // precio
			}
			else if (i == 3 && j == 0)
			{
				cout << hamburguesa[5] << "\t\t"; // descripcion
			}
			else if (i == 0 && j == 2)
			{
				cout << hamburguesa[6] << "\t "; // cencilla    perros
			}
			else if (i == 0 && j == 3)
			{
				cout << hamburguesa[7] << "\n"; // precio
			}
			else if (i == 1 && j == 1)
			{
				cout << hamburguesa[8] << endl; // descripcion
			}
			else if (i == 2 && j == 1)
			{
				cout << hamburguesa[9] << "\t\t"; // doble
			}
			else if (i == 2 && j == 2)
			{
				cout << hamburguesa[10] << endl; // precio
			}
			else if (i == 3 && j == 1)
			{
				cout << hamburguesa[11] << endl; // descripcion
				cout << "\n--------------------------------\t\t\t\t------------------------------------------------------ \n";
			} // fin de mostrar en pantalla
		}
	}																		 // fin for
	cout << "  ---- SALCHIPAPA ---- \n"; // segundo producto
	for (int i = 0; i < 12; i++)
	{ // fila
		for (int j = 0; j < 13; j++)
		{ // columnas
			if (i == 0 && j == 0)
			{																 // inico de mostrar en pantalla
				cout << salchipapa[0] << "\t"; // nombre salchipapa
			}
			else if (i == 0 && j == 1)
			{
				cout << salchipapa[1] << "\n"; // precio salchipapa
			}
			else if (i == 1 && j == 0)
			{
				cout << salchipapa[2] << "\t\t\t\t"; // descripcion salchipapa 1
			}
			else if (i == 2 && j == 7)
			{
				cout << "\n----------------------------------\n";
				cout << salchipapa[3] << "\t"; // nombre especial
			}
			else if (i == 2 && j == 8)
			{
				cout << salchipapa[4] << endl; // precio especial
			}
			else if (i == 3 && j == 0)
			{
				cout << salchipapa[5]; // descipcion salchipapa 2
			}
		}																	// fin de mostrar en pantalla
	}																		// fin for
	cout << "\n ---- GASEOSAS ---- \n"; // tercer producto
	for (int i = 0; i < 3; i++)
	{ // fila
		for (int j = 0; j < 2; j++)
		{ // columnas
			if (i == 0 && j == 0)
			{
				cout << gaseosa[0] << "\t"; // nombre personal
			}
			else if (i == 0 && j == 1)
			{
				cout << gaseosa[1] << endl; // precio personal
			}
			else if (i == 1 && j == 0)
			{
				cout << gaseosa[2] << "\t"; // nombre mediana
			}
			else if (i == 1 && j == 1)
			{
				cout << gaseosa[3] << endl; // precio mediana
			}
			else if (i == 2 && j == 0)
			{
				cout << gaseosa[4] << "\t"; // nombre familiar
			}
			else if (i == 2 && j == 1)
			{
				cout << gaseosa[5] << endl; // precio familiar
				cout << "-----------------------------------" << endl;
			}
		}
	}
	cout << "Querido usuario, seleccione que producto desea consumir\n1->HAMBURGUESAS\n2->PERRO\n3->SALCHIPAPA\n4->GASEOSAS";
	cin >> seleccionPedido;
} // fin void

int pedidos(int seleccionPedido)
{
	switch (seleccionPedido)
	{
	case 1:
		cout << "1->sencilla\t2->Doble\t3->ambas";
		cin >> opc;
		if (opc == 1)
		{ // opcion 1
			cout << "cuantas sencillas:";
			cin >> sencilla;
			pedido = 10000 * sencilla;
			cout << "desea pedir algo mas:\nSI->y\tNO->n";
			cin >> continuar;
			cout << "";
			break;
		}
		else if (opc == 2)
		{ // opcion 2
			cout << "cuantas dobles:";
			cin >> doble;
			pedido1 = 18000 * doble;
			cout << "desea pedir algo mas:\nSI->y\tNO->n";
			cin >> continuar;
			cout << "";
			break;
		}
		else
		{ // opcion 3
			cout << "cuantas dobles:";
			cin >> doble1;
			cout << "cuantas sencillas:";
			cin >> sencilla2;
			pedido2 = (18000 * doble1) + (10000 * sencilla2);
			cout << "desea pedir algo mas:\nSI->y\tNO->n";
			cin >> continuar;
			cout << "";
			break;
		}
	}
}
