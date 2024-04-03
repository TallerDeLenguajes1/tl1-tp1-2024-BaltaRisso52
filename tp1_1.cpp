#include <stdio.h>

int main()
{
    printf("Hola mundo\n");
    int aux = 5;
    int* puntero = &aux;

    printf("El contenido del puntero es: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %d\n", puntero);
    printf("Direccion de memoria de la variable: %d\n", &aux);
    printf("Direccion de memoria del puntero: %d\n", &puntero);
    printf("Tamanio de memoria utilizado por la variable: %d\n", sizeof(aux));

    return 0;
}
