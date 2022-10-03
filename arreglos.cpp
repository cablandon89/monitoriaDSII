#include<iostream>
using namespace std;
/* Función principal */
// Preguntar al usuario 10 números, buscar el mayor y entregar la posición dónde este se encuentra;
int main(){
  int arreglo[10];
  //int resultado[2] = {0,0};
  int numero_mayor = 0;
  int posicion = 0;
  cout << "Bienvenido al programa por favor ingrese 10 números\n";
  //ciclo para preguntarle al usuario los números
  for(int i=0; i<10; i++){
    cout << "Ingrese el número "<< i+1 <<"\n";
    cin >> arreglo[i];
    if(arreglo[i] > numero_mayor){
      numero_mayor = arreglo[i];
      posicion = i;
    }
  }

  //Recorrer el arreglo para buscar el número mayor
  /*int i = 0;
  while(i<10){
    //"Resultado = [primera posición = numero o contenido, segunda posicion = indice];"
    if(arreglo[i] > numero_mayor){
      numero_mayor = arreglo[i];
      posicion = i;
      //resultado[0] = arreglo[i];
      //resultado[1] = i;
    }
    i++;
  }*/

  //devuelvo la respuesta al usuario;
  cout << "El número más grande del arreglo es "<< numero_mayor <<" y está en la posición "<< posicion;
  return 0;
}
