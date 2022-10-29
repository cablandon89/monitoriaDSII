#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;

string leermensaje(string usuario)
{
  char mensaje[500];
  cout << usuario << " escriba su mensaje " << endl;
  cin.getline(mensaje, 500, '\n');
  return mensaje;
}

/* Función principal */
int main()
{
  time_t rawtime;
  struct tm *timeinfo;
  char buffer[80];
  string fechayhora;
  string usuario;
  string usuario2;
  string chat[10][3];
  string mensaje;
  int terminar = 1;
  int turno = 1;
  int indice = 0;
  char terminarc[1];
  /* cout << "Bienvenido al chat. \n Escriba su nombre. \n";
  cin >> usuario;
  cout << "Escriba el nombre del usuario 2 \n";
  cin >> usuario2; */

  do
  {
    /* cout << "Precione la tecla 1 para escribir mensaje." << endl;
    cout << "Precione la tecla 0 si quiere salir" << endl;
    cin.getline(terminarc, 1, '\n');
    terminar = (int)terminarc[0];
    terminar = terminar + 1; */
    // cin >> terminar;
    if (terminar != 0)
    {
      time(&rawtime);
      timeinfo = localtime(&rawtime);

      strftime(buffer, 80, "%d-%m-%Y %I:%M%p.", timeinfo);
      // fechayhora = (buffer);
      // cout << "Usuario" << turno << " escriba su mensaje " << endl;
      string turnos = std::to_string(turno);

      mensaje = leermensaje("Usuario" + turnos);

      chat[indice][1] = mensaje;
      chat[indice][0] = "Usuario" + turnos;
      chat[indice][2] = (buffer);

      if (turno == 1)
      {
        turno = turno + 1;
      }
      else
      {
        turno = turno - 1;
      }
      indice = indice + 1;
      if (indice == 9)
      {
        terminar = 0;
      }
    }
  } while (terminar != 0);
  for (int i = 0; i < 9; i++)
  {
    cout << "U " << chat[i][0] << " M " << chat[i][1] << " H " << chat[i][2] << endl;
  }

  return 0;
}