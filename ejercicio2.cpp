/* Escribe un programa que reciba como entrada un número entero y muestre la
secuencia de Fibonacci hasta ese número.
 Requisitos:
 - Utilizar una función para generar la secuencia de Fibonacci.
 - Utilizar ciclos para calcular los términos de la secuencia.
 - Utilizar una bifurcación para manejar el caso de un número negativo*/
#include <iostream>
void secuenciafibonacci(int n) {
    int a = 0;
    int b = 1;
    
   
    if (n < 0) {
        std::cout << "Error: El numero ingresado debe ser positivo." << std::endl;
        return;
    }
    
 
    std::cout << "Secuencia de Fibonacci hasta " << n << ":" << std::endl;
    
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        
        int temp = a;   
        a = b;
        b = temp + b;
    }
    
    std::cout << std::endl;
}

int main() {
    int numero;
    
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;
    
    secuenciafibonacci(numero);
    
    return 0;
}

