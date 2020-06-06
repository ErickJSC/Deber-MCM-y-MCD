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
#include"Librerias.h"
class Operaciones {
public:
	int maxArr(int* arr, int n);
	unsigned long int mcm(int* arr, int n);
	bool esDivisibleArr(int* arr, int n, int numero);


};
unsigned long int Operaciones:: mcm(int* arr, int n) {
	int i, len;
	unsigned long int intMcm = 1;
	i = 0;
	len = maxArr(arr, n);
	for (int i = 2; i <= len; i++) {
		while (esDivisibleArr(arr, n, i)) {
			intMcm *= i;
		}
	}
	return intMcm;
}

bool Operaciones::esDivisibleArr(int* arr, int n, int numero) {
	bool divisible = false;
	for (int i = 0; i < n; i++) {
		if (*arr % numero == 0) {
			divisible = true;
			*arr = *arr / numero;
		}
		*(arr++);
	}
	return divisible;
}

int Operaciones::maxArr(int* arr, int n) {
	int max = -1;
	if (n > 1) {
		max = *arr;
		for (int i = 1; i < n; i++) {
			if (max < *arr)
				max = *arr;
			*(arr++);
		}
	}
	return max;
}