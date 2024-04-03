#include <stdio.h>

int cuadrado(int num);
void cuadrado2(int* num);
void mostrar(int aux);
void invertir(int* a, int* b);
void orden(int* a, int* b);

int main()
{

    int a = 10;
    int b = 50;

    printf("Antes de invertir los valores:\n a = %d \n b = %d", a, b);
    
    invertir(&a, &b);

    printf("\nLuego de invertir los valores:\n a = %d \n b = %d", a, b);

    orden(&a, &b);

    printf("\nLuego de ordenar los valores:\n a = %d \n b = %d", a, b);

    return 0;
}

int cuadrado(int num){
    return num * num;
}

void cuadrado2(int* num){
    *num = *num * *num;
}

void mostrar(int aux){
    printf("La direccion de memoria es: %p\n", &aux);
    printf("El contenido de la variable es: %d", aux);
}

void invertir(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int* a, int* b){
    if (*a > *b)
    {
        invertir(a, b);
    }
    
}