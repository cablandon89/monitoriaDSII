#include<iostream>

using namespace std;

/*Función que haga un hola "Palabra" escribir la palabra, el me devuelva un hola + esa palabra*/

string saludo(string palabra){
	cout << "Hola " << palabra << "\n";
	return palabra;
}

int main(){
	int menu = 0;
	string palabra = "";
	cout << "Bienvenido al programa";
	do{
		cout << "Escriba la palabra para saludar \n";
		cin >> palabra;
		saludo(palabra);
		cout << "Quiere volver a saludar?\n 0. Si. \n 1. No. \n ";
		cin >> menu;
	}while(menu != 1);
	
	return 0;
	
}
