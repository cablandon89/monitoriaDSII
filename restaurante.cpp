#include <iostream>
using namespace std;
/* Función principal */
int main()
{
  // Declaro variables
  string productos[2][3] = {{"Perro", "Perro caliente con salchicha", "10000"}, {"Hamburguesa", "Hamburguesa doble", "20000"}};
  int pedido[2][3];
  int compra;
  int cantidad = 0;
  int menu = 0;
  // Primer mensaje al usuario
  cout << "Bienvenido al restaurante de comidas rápidas\n";
  // Inicio el ciclo repetitivo de preguntar los productos que desea;
  while (menu == 0)
  {
    cout << "Por favor seleccione el producto que desea\n";
    // Mostrar los productos disponibles
    for (int i = 0; i < 2; i++)
    {
      cout << i + 1 << "." << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2] << "\n";
    }
    cout << "3. Salir del restaurante \n";
    // Capturo la selección del usuario
    cin >> compra;
    // Valido la selcción del usuario
    if (compra <= 2)
    {
      // Guardo en el pedido el producto que selccionó
      pedido[compra - 1][0] = compra - 1;
      // Pregunto cuantas unidades quiere
      cout << "Cuantos productos va a consumir\n";
      cin >> cantidad;
      // Guardo las unidades
      pedido[compra - 1][1] = cantidad;
      // Convierto el precio en número
      int precio = std::stoi(productos[compra - 1][2]);
      // Calculo el total del pedido
      pedido[compra - 1][2] = (cantidad * precio);
      // Precunto si quiere selccionar otro o que;
      cout << "Si desea adicionar otro producto precione 0 si no precione 1\n";
      cin >> menu;
    }
    else
    {
      // Error por si no selecciona un producto válido
      cout << "Error, producto seleccionado no válido\n";
    }
  }
  // Muestra el producto selecccionado con el total
  cout << "Compra =" << pedido[0][0] << " " << pedido[0][1] << " " << pedido[0][2] << "\n ";
  return 0;
}