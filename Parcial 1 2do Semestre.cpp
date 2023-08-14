#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>


using namespace std;




void seleccion(int arr[], int n)

{
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		// Intercambiar el elemento mínimo encontrado con el
		//primer elemento no ordenado
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}

int busquedaLineal(int arreglo[], int tamano, int valorBuscado) {
	for (int i = 0; i < tamano; i++) {
		if (arreglo[i] == valorBuscado) {
			return i; // Se encontró el valor, devuelve el índice
		}
	}
	return 99999; // No se encontró el valor
}

int busquedaBinaria(int arreglo[], int inicio, int fin, int valorBuscado) {
	if (inicio <= fin) {
		int medio = inicio + (fin - inicio) / 2;
		if (arreglo[medio] == valorBuscado) {
			return medio; // Se encontró el valor, devuelve el índice
		}
		else if (arreglo[medio] > valorBuscado) {
			return busquedaBinaria(arreglo, inicio, medio - 1, valorBuscado); // Buscar en la mitad inferior
		}
		return busquedaBinaria(arreglo, medio + 1, fin, valorBuscado); // Buscar en la mitad superior
	}
	return -1; // No se encontró el valor
}


void burbuja(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// Intercambiar elementos si están en el orden incorrecto
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void seleccion(int arr[], int n)

{
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		// Intercambiar el elemento mínimo encontrado con el
		//primer elemento no ordenado
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
}



void burbujayseleccion(int arr[], int n)

{

	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// Aca se realiza el intercambio de elementos si no estan ordenados
				int temp = arr[min_idx];
				arr[min_idx] = arr[i];
				arr[i] = temp;
			}
		}
	}
}








//
//int main()
//{
//	int opcionesmen;
//	int contadordat = 0;
//	string strarr1, strarr2, strarr3, strarr4, strarr5, strarr6, strarr7, strarr8, strarr9, strarr10;
//	int arrn1, arrn2, arrn3, arrn4, arrn5, arrn6, arrn7, arrn8, arrn9, arrn10;
//
//	int tamanio = 10;
//	int arregloNumerico[10];
//	string arreglocadena[10];
//
//	cout << "Llene el arreglo con 10 casillas numericas: " << endl;
//	for (int i = 1; i <= 10; i++)
//	{
//
//		cout << "Ingrese dato casilla  " << i << endl;
//		cin >> arregloNumerico[i];
//
//
//	}
//
//
//	cout << "Llene el arreglo con 10 casillas de cadena: " << endl;
//	for (int i = 1; i <= 10; i++)
//
//	{
//
//		cout << "Ingrese dato casilla  " << i << endl;
//		cin >> arreglocadena[i];
//
//
//
//	}
//
//	
//	cout << "Seleccione una opcion de que quiere hacer  " ;
//	cout << "1. Orenar numeros ";
//	cout << "6. Odenar datos todas ocurrencias ";
//
//	cin >> opcionesmen;
//
//
//
//	//if (opcionesmen == 1)
//	//{
//
//	//	int arr[] = { arregloNumerico[10]};
//	//	int n = sizeof(arr) / sizeof(arr[0]);
//	//	seleccion(arr, n);
//	//	cout << "Arreglo ordenado de forma Ascendente: \n" << endl;
//	//	for (int i = 0; i < n; i++)
//	//		cout << arr[i] << " " << endl;
//	//	system("Pause");
//
//
//
//	//}
//
//	//if (opcionesmen == 6)
//	//{
//
//	//	
//	//}
//
//
//
//	}
	


