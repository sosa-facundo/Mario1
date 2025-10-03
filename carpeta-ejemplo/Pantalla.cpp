#include <iostream>
#include "Pantalla.h"

using namespace std;

void Pantalla::mostrar(string texto){
	cout<<texto<<endl;
}
void Pantalla::enter(){
	cout<<endl;
}
void Pantalla::escribirLinea(){
	cout<<"-----------------";
}

