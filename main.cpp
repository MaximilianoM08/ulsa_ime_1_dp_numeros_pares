// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"
using namespace std;

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: cantidad de números a leer
    const int CANTIDAD = 5;
    int contador = 0;
    int totalPares = 0;

    // 2. Arreglo y contador (siempre inicializados)
    //    TODO: declara el arreglo pares. ¿De qué tamaño en el peor caso?
    //    TODO: declara totalPares. ¿Con qué valor empieza?
    int pares[5];

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: leer CANTIDAD números
    //    TODO: lee cada número con leerEntero("Escribe un numero: ")
    //    TODO: si el número es par, guárdalo en la siguiente posición libre
    //    ¿Qué variable te dice cuál es la siguiente posición libre?
    while (contador < CANTIDAD) {
        int numero = leerEntero("Ingresa un número entero: ");
        if (numero%2 == 0) {
            pares[totalPares] = numero;
            totalPares = totalPares + 1;
        }
        
        contador = contador + 1;
    }

    // 4. Salida
    //    TODO: muestra cuántos pares se guardaron
    //    TODO: recorre el arreglo e imprime cada par
    //    ¿Hasta qué posición debes llegar?
    std::cout <<"Pares encontrados: " << totalPares << "\n";
    int i = 0;
    while (i < totalPares) {
        std::cout << "Mostrar pares: " << pares[i] << "\n";
        i = i + 1;
    }

    // ¿Qué significa return 0;?
    return 0;
}