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
#include"Arreglo.h"
using namespace std;
int main()
{
	int tam;
	Ingreso i;
	Arreglo arreglo;
	string dim;
	dim = i.leer("Ingrese el tamanio que tendra su arreglo (solo numeros entreros)", 1);
	istringstream(dim) >> tam;
	int* v = new int[tam];
	arreglo.encerar(v, tam);
	arreglo.ingresar(v, tam);
	cout << "-----------------------------------------------------------------------\n";
	arreglo.imprimir(v, tam);
	arreglo.procesarMCD(v, tam);
	arreglo.procesarMCM(v, tam);
	delete(v);
	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
