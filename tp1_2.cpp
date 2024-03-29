#include <stdio.h>

// a)función que devuelva el cuadrado de un número
int cuadrado(int num);
int cuadrado(int num) {
    return num * num;
}

//b)función anterior, pero devolviendo un tipo void
void cuadrado(int num, int *resultado);
void cuadrado(int num, int *resultado){
    *resultado = num * num;
}

//c)muestre por pantalla la dirección y el contenido de la variable
void direccionYContenido(int variable);
void direccionYContenido(int variable) {
    printf("La dirección de la variable es: %p\n",variable);
    printf("El contenido de la variable es: %d\n",variable);
}

//d)Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(int *a, int *b);
void Invertir(int *a, int *b) {
    int variable = *a;
    *a = *b; 
    *b = variable; 
}

//e)Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(int *a, int *b);
void orden(int *a, int *b) {
    int aux;
  if (*a > *b) {
    aux = *a;
    *a = *b;
    *b = aux;
  }
}

//f)Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla
void leer(int a,int b);
void leer(int a,int b){
    printf("\nValor de la 1er variable: %d",a);
    printf("\nValor de la 2da variable: %d",b);
}