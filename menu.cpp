#include "menu.h"
#include <cstdlib> // para system()

Menu::Menu(){
	_opcion=-1;
}

int Menu::getOpcion() const { return _opcion; }

void Menu::mostrarMenu(){///mostrar menu
	_pantalla.mostrar("1 - JUGAR"); //aca utilizamos el metodo de la clase Teclado ya que no se va a  poder usar mas los cout. 
	_pantalla.mostrar("2 - ESTADISTICAS ");//using namespace std; ya no se va a usar mas.
	_pantalla.mostrar("3 - CREDITOS");//Se reemplasa por esta expresion. De la clase Pantalla 
	_pantalla.enter();// == endl;
	_pantalla.escribirLinea(); // metodo escribir linea de Pantalla ==  (----------) dibuja lineas
	_pantalla.enter();// == endl;
	_pantalla.mostrar("0 - SALIDA"); // otro cout entre parentesis escribimos lo que queremos mostrar en pantalla.
	_pantalla.enter();
}
	
int Menu::leerOpcionMenu(){/// validacion de la entrada de int opcion;
	int opcion;
	
	while (true){
		_pantalla.mostrar("Ingrese una opcion (0 al 3): ");// "cout"
		cin >> opcion;
		
		if (cin.fail()|| opcion<0 || opcion>3){
			cin.clear();    ///limpiamos el estado de error cin
			cin.ignore(1000, '\n');   ///descarta la entrada incorrecta
			system("cls");   // limpia la consola en Windows
			_pantalla.mostrar("Entrada incorrecta. Por favor, ingrese un numero del 0 al 3.");
			mostrarMenu();// LLAMO AL METODO MOSTRAR MENU  QUE SE VE ARRIBA metodo tipo void mostrarMenu();
		} else{
			cin.ignore(1000, '\n'); ///descarta el sobrante del buffer
			return opcion;
		}
	}
}

void Menu::ejecutar(){
	do{
		mostrarMenu();                  // mostrarMenu(); aca utilizamos el metodo de la propia clase Menu
		_opcion = leerOpcionMenu();     // aca lee la opcion (esto es un setter pero le damos un nombre propio) lee, y guardar en atributo
		
		switch (_opcion){
		case 1:
			_pantalla.mostrar("VAMOS A JUGAR");
			/*rlutil::cls();
			///Esta funcion realiza el juego, y nos trae el maximo puntaje y el mejor jugador para la estadistica.
			jugarPartida (jugadorUno, jugadorDos, maximoPuntaje, mejorJugador);*/
			break;
		case 2:
			/*rlutil::cls();
			rlutil::hidecursor();
			rlutil::saveDefaultColor();
			for (int i=1; i <=6; i++){
				dibujarDado(i,i*10,rand()%10+1);
			}
			rlutil::resetColor();
			rlutil::locate(8,15);
			cout <<"ESTADISTICAS" << endl;
			if(maximoPuntaje==0){
				cout<<"Todavia no existe un maximo puntaje."<<endl;
			}else{
				cout <<" Mejor puntaje: "<< maximoPuntaje<< " del jugador "<< mejorJugador;
			}
			rlutil::anykey();*/
			break;
		case 3:
			/*rlutil::cls();
			rlutil::hidecursor();
			rlutil::saveDefaultColor();
			for (int i=1; i <=6; i++){
				dibujarDado(i,i*10,rand()%10+1);
			}
			///rlutil::anykey();
			rlutil::resetColor();
			rlutil::locate(8,15);
			cout <<"CREDITOS" << endl;
			mostrarCreditos();*/
			break;
		case 0:
			_pantalla.mostrar("Gracias por utilizar nuestra aplicacion :)");
			break;
		}
		
	}while (_opcion !=0);
}
