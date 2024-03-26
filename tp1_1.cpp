#include <iostream>
#include <stdio.h>

int main(){
    std::cout << "hola mundo" <<std::endl;
    int variable=5;
    int *puntero=&variable;
    printf("\nEl contenido del puntero es: %d",puntero);
    printf("\nLa direccion de memoria almacenada por: %d",puntero);

}