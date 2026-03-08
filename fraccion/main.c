#include "fraccion.h"
#include <stdio.h>

int main(){
    Fraccion *f1, *f2, *suma;

    f1= crearFraccion(1,4);
    f2= crearFraccion(1,2);

    printf("Fraccion 1: ");
    imprimir(f1);

    printf("Fraccion 2: "); 
    imprimir(f2);

    suma = sumar(f1, f2);

    printf("Suma de las fracciones: ");
    imprimir(suma);

    destruir(f1);
    destruir(f2);
    destruir(suma);

    return 0;
}
