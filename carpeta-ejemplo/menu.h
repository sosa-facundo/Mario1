#pragma once
#include <iostream>
#include "Pantalla.h"
using namespace std;

	
class Menu{
public:
	Menu();/// constructor por defecto
	void mostrarMenu();/// muestra el men� en pantalla
	int leerOpcionMenu();/// valida y devuelve la opci�n elegida
	void ejecutar();/// ejecuta lo que corresponde seg�n la opci�n
	
	int getOpcion() const;///obtengo
	
private:
	int _opcion;
	Pantalla _pantalla;
};
