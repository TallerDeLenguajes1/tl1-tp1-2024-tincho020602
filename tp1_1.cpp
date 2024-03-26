#include <iostream>
#include <stdio.h>

int main(){
    std::cout << "hola mundo" <<std::endl;
    int variable=5;
    int *puntero=&variable;
    printf("\nEl contenido del puntero es: %d",*puntero);
    printf("\nLa direccion de memoria almacenada por el puntero es: %p",*puntero);
    printf("\nLa direccion de memoria almacenada por la variable es: %p",variable);
    printf("\nLa direccion del puntero es: %p",puntero);
    printf("\nTamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(variable));
}