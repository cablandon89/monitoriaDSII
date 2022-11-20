/*
	1.	Realizar una calculadora por medio de funciones que almacene los resultados en una PILA. 
	Se debe almacenar más de un resultado (es el historial de las operaciones).
*/
#include<iostream>
#include <locale.h>
#include<stdlib.h> 
using namespace std;

struct Nodo{
	int resultado;
	Nodo *siguiente;
};

int operar(int num1, int num2, int operacion){
	int resultado;
	
	switch(operacion){
		case 1:
			resultado = num1 + num2;
			break;
		case 2:
			resultado = num1 - num2;
			break;
		case 3:
			resultado = num1 * num2;
			break;
		case 4:
			if(num2 == 0){
				resultado = 0;
			}else{
				resultado = num1 / num2;
			}
			break;		
	}
	
	return resultado;
}

/* Prototipo */ 
void agregarCola(Nodo *&,Nodo *&,int);

/* Función principal */
int main(){
	setlocale(LC_ALL, "");
	string operacion[5] = {"","Suma","Resta","Multiplicacion","Division"};
  int num1;
  int num2;
  int opcion;
  int menu = 0;
  Nodo *frente = NULL;
  Nodo *fin = NULL;
  int resultado;
  
  cout << "Bienvenido a la calculadora \n";  
  //LIFO
  
  while(menu == 0){
  		cout << "Por favor ingrese la operación a realizar \n 1. Suma \n 2. Resta \n 3. Multiplicación \n 4. División \n";
  		cin >> opcion;
  		cout << "Por favor ingrese el primer número \n";
	    cin >> num1;
	  
	    cout << "Por favor ingrese el segundo número \n";
	    cin >> num2;
	  	
	  	resultado = operar(num1,num2,opcion);
	    cout << "El resultado de la " << operacion[opcion] << " es: "<< resultado << "\n";
	    agregarCola(frente, fin, resultado);
	    cout << "Quiere realizar otra operación \n 0. Si, 1. No \n";
	    cin >> menu;
  }
  
  return 0;
}

void agregarCola(Nodo *&frente, Nodo *&fin,int num){
	Nodo *nuevo = new Nodo();
	nuevo->resultado = num;
	nuevo->siguiente = null;
	
	if(verficarCola(frente)){
		frente = nuevo;
	}else{
		fin->siguiente = nuevo;
	}
	
	fin = nuevo;
	
	cout << num << " Agregado a la cola \n";
	
}

bool verficarCola(Nodo *frente){
	if(frente == null){
		return true;
	}else{
		return false;
	}
}


