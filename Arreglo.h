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
#pragma once
#include"Ingreso.h"
#include "Operaciones.h"
class Arreglo
{
public:
    void encerar(int*, int);
    void ingresar(int*, int);
    void imprimir(int*, int);
    void procesarMCM(int*, int);
    void procesarMCD(int*, int);
    Arreglo();
};
void Arreglo::encerar(int* v, int tam)
{
	for (int i = 0; i < tam; *(v + i) = 0, i++);
}
void Arreglo::ingresar(int* v, int tam)
{
	Ingreso ingreso;
	string dim;
	for (int i = 0; i < tam; i++) {
		dim = ingreso.leer("Valores: ", 1);
		//cout << "Valor " << i + 1 << endl;
		istringstream(dim) >> *(v + i);
	}
}
void Arreglo::imprimir(int* v, int tam) {
	cout << "Arreglo {";
	for (int i = 0; i < tam; i++) {
		printf("%d,", (*v));
		*(v++);
	}
	cout << "}" << endl;
	//cout<<v[i]<<", ";
}
//Funcion para hallar el Maximo Comun Divisor
void Arreglo::procesarMCD(int* v, int tam)
{
	int mcd, r, num;
	for (int i = 0; i < tam; i++) {
		num = *v;
		if (i == 0) {
			mcd = num;
		}
		do {
			r = mcd % num;
			mcd = num;
			num = r;
		} while (r != 0);
		*(v++);
	}
	cout << "El Maximo comun divisor es : " << mcd << endl;
}
void Arreglo::procesarMCM(int* v, int tam) {
	Operaciones op;
	cout << "mcm = " << op.mcm(v, tam) << endl;
}

//Construcutor
Arreglo::Arreglo() {};
