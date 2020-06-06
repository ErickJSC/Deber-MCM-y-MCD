#pragma once
/*********************************************************************
						UNIVERSIDAD DE LAS FUERZAS ARMADAS"ESPE"
* Autor: Erick Santamaria 
* Carrera: Ingenieria de Software
* Materia: Estructuras de datos
* Nrc: 6396
*********************************************************************
Programa para hallar el minimo comun multiplo y maximo comun divisor de un arreglo
**********************************************************************
*/
#include "Validacion.h"

using namespace std;
// Clase que gestiona el ingreso de datos
class Ingreso {

public:
	string leer(string, int);
};
string Ingreso::leer(string mensage, int tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese, ingrese solo numeros" << endl;
		cin >> entrada;
	}
	return entrada;
}