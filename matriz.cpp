#include<iostream>
using namespace std;
/* Función principal */
// crear una matriz para almacenar la siguiente de información nombre, apellido, edad, correo;

int main(){
  string estudiantes[5][4];
  string titulos[4] = {"nombre","apellido","edad","correo electrónico"};
  cout << "Bienvenido al programa, por favor ingrese los datos de los estudiantes a continuación\n";

  //Recorrer las columnas
  for(int i=0; i<5; i++){
    //Recorrer las filas
    for(int j=0; j<4; j++){
      //Pedir información al usuario
      cout << "Por favor ingrese el "<< titulos[j] <<" del estudiante "<< i+1 <<"\n";
      //Guardar el dato dentro de la matriz
      cin >> estudiantes[i][j];
      //Verificar que no esté vacío
      if(estudiantes[i][j].empty()){
        cout << "No ha ingresado un dato válido\n";
        j = j-1;
        continue;
      }
      //Verificar que la edad si sea un número
      if(j == 2){
        //estudiantes[i][j]; empiezo a recorrer la edad dígito por dígito
        for(int k=0; k<estudiantes[i][j].size(); k++){
          //Verificar si el digito a evaluar no es un número
          if(!isdigit(estudiantes[i][j][k])){
            //Regresar un mensaje de error, regresar el iterador para que vuelva a preguntar la edad
            //Terminar el ciclo de evaluar la edad
            cout << "El valor ingresado no es un número\n";
            j = j-1;
            break;
          }
        }
      }
      //Verificar correo electrónico
      if(j == 3){
        //Variable con los pasos a evaluar
        int eval = 0;
        //Recorrer el dato caracter por caracter
        for(int k=0; k<estudiantes[i][j].size(); k++){
          //Evaluar cada una de los caracteres
          switch(eval){
            case 0:
              //Que comience por lo menos con una letra
              if(isalpha(estudiantes[i][j][k])){
                eval ++;
              }
              break;
            case 1:
              //Que tenga una arroba
              if(estudiantes[i][j][k] == '@'){
                eval ++;
              }
              break;
            case 2:
              //Que tenga texto despues de la arroba
              if(isalpha(estudiantes[i][j][k])){
                eval ++;
              }
              break;
            case 3:
              //Que tenga un punto
              if(estudiantes[i][j][k] == '.'){
                eval ++;
              }
              break;
            case 4:
              //Que tenga texto después del punto
              if(isalpha(estudiantes[i][j][k])){
                eval ++;
              }
              break;
          }
        }
        if(eval < 5){
          cout << "El valor ingresado no es un correo\n";
          j = j-1;
        }
      }
    }
  }

  return 0;
}