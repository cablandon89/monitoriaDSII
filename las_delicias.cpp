#include <iostream>
using namespace std;
/* Función principal */

void mostrar(string menu[3][3])
{
  cout << "Bienvenido a las delicias \n Seleccione un producto \n";
  for (int i = 0; i < 3; i++)
  {
    cout << i + 1 << ". " << menu[i][0] << " $ " << menu[i][2] << " : " << menu[i][1] << "\n";
  }
}

string preguntar(string que)
{
  string seleccion;
  cout << "Seleccione " << que << "\n ";
  cin >> seleccion;

  return seleccion;
}

int total(string arreglo[3][3], int seleccion, int cantidad)
{
  int precio = 1;
  // int precio = stoi(arreglo[seleccion - 1][2]);

  return precio * cantidad;
}

int main()
{
  string productos[3][3] = {{"Hamburguesa sencilla", "Carne de hamburguesa, cebolla, lechuga, tomates,\t\t\tUna salchicha ranchera, huevo doble de codorniz,queso sahaddai, salsas y huevo de codorniz.", "10000"}, {"Hamburguesa doble", "Doble carne de hamburguesa, cebolla, lechuga y tomates,\t\t doble salchicha ranchera,  triple Huevos de codorniz,  doble queso sahaddai, salsas y huevo doble de codorniz.", "18000"}, {"Perro sencillo", "picada de papa, Queso sahaddai, salsas y cebolla.", "8000"}};

  string productos2[3][3] = {{"Hamburguesa sencilla2", "Carne de hamburguesa, cebolla, lechuga, tomates,\t\t\tUna salchicha ranchera, huevo doble de codorniz,queso sahaddai, salsas y huevo de codorniz.", "10000"}, {"Hamburguesa doble", "Doble carne de hamburguesa, cebolla, lechuga y tomates,\t\t doble salchicha ranchera,  triple Huevos de codorniz,  doble queso sahaddai, salsas y huevo doble de codorniz.", "18000"}, {"Perro sencillo2", "picada de papa, Queso sahaddai, salsas y cebolla.", "8000"}};
  string seleccion[2];

  int menu = 0;
  int opcion = 0;
  do
  {
    mostrar(productos);
    mostrar(productos2);
    cout << "4. Salir\n";
    cin >> opcion;
    if (opcion == 4)
    {
      menu = 1;
    }
    /* seleccion[0] = preguntar("el producto");
    seleccion[1] = preguntar("la cantidad");

    cout << "Su total a pagar es " << total(productos, stoi(seleccion[0]), stoi(seleccion[1])) << "\n"; */
  } while (menu != 1);

  return 1;
}
