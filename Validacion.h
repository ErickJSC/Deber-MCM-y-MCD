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
#include "Librerias.h"


using namespace std;

// Clase que valida los datos de entrada

class Validacion {
public:
	bool validar(string, int);
};


/**
	@param tipo 1 para enteros 2 para flotantes
*/
bool Validacion::validar(string entrada, int tipo) {
	int contador = 0;
	try {
		if (entrada == ".")
		{
			throw 1;
		}
		for (int i = 0; i < entrada.length(); i++) {
			if (isalpha(entrada[i])) {
				throw 1;
			}
			if (!isdigit(entrada[i]) && tipo == 1) {
				throw 1;
			}
			if (entrada[i] == '.') {
				contador++;
			}
			if ((isdigit(entrada[i]) == 0 && entrada[i] != '.' && entrada[i] != '-') || (contador > 1)) {
				throw 1;
			}
		}
	}
	catch (int e) {
		return true;
	}
	return false;
}
