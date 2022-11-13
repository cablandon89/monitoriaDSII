#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h> //Librería para trabajar con funciones de string
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	//Variable para almacenar cada linea leid
	string x;
	system("ipconfig /all > a.txt"); //Crear un archivo con la información del equipo
	ifstream file("a.txt"); //Abrir el archivo
	//Recorrer el archivo linea por linea
	while(getline(file, x)){
		//logica;
		//Buscar el hostname
		if(x.find("Nombre de host") != -1){
			cout << "Hostname: "<< x.substr(37, x.size()) << "\n";
		}
		//Buscar la dirección MAC
		if(x.find("sica.") != -1){
			cout << "Dirección MAC: "<< x.substr(47, x.size()) << "\n";
		}
		//Dirección IP
		if(x.find("IPv4.") != -1){
			cout << "Dirección IP: "<< x.substr(47, x.size()) << "\n";
		}
	}
	file.close(); //Cerrar el archivo 
	system("del a.txt"); //Borrar el archivo
	
	return 0;
}
