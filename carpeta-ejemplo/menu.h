#pragma once
#include <iostream>
#include "Pantalla.h"
using namespace std;

	
class Menu{
public:
	Menu();/// constructor por defecto
	void mostrarMenu();/// muestra el menú en pantalla
	int leerOpcionMenu();/// valida y devuelve la opción elegida
	void ejecutar();/// ejecuta lo que corresponde según la opción
	
	int getOpcion() const;///obtengo
	
private:
	int _opcion;
	Pantalla _pantalla;
};
