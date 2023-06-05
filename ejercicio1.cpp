/* Ejercicio: Suma de los elementos de un arreglo
 Descripción: Escribe un programa que reciba como entrada un arreglo de números enteros y
calcule la suma de todos sus elementos.
 Requisitos:
 - Utilizar un ciclo para recorrer el arreglo.
 - Utilizar una función para realizar la suma.
 - Utilizar una bifurcación para manejar el caso de un arreglo vacío*/
#include<iostream>
using namespace std;


int calcularSuma(int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int size;
    std::cout << "Ingrese el tamano del arreglo: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "El arreglo esta vacio." << std::endl;
        return 0;
    }

    int arreglo[size];
    std::cout << "Ingrese los elementos del arreglo: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arreglo[i];
    }

    int suma = calcularSuma(arreglo, size);
    std::cout << "La suma de los elementos del arreglo es: " << suma << std::endl;

    return 0;
}

