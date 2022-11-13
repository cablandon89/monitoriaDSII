#include <iostream>

using namespace std;

int main(){
	int km;
	int precio;
	int peaje;
	int recargo = 0;
	
	cout << "Por favor ingrese los km a recorrer\n";
	cin >> km;
	
	cout << "Por favor ingrese el precio del litro de combustible\n";
	cin >> precio;
	
	cout << "por favor ingrese el precio del peaje a cruzar\n";
	cin >> peaje;
	
	if((km*2) > 400){
		recargo = 50;
	}
	
	//cout << "Va a recorrer " << km*2 << " km, va a consumir " << ((km*2)/13)*precio ;
	//cout << " voy a pagar "<< peaje * 2 << " va a pagar "<< recargo << " de recargo \n";
	
	cout << "El gasto del recorrido total es : " << (((km*2)/13)*precio) + (peaje*2) + recargo;
	
	
	return 0;
}
