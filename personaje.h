#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <stdio.h>
struct personaje
{
    char nombre[50];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int contador =0;
void capturar_personaje(){
    if (contador<5)
    {
        printf("Nombre: ");
        scanf("%s", &personajes[contador].nombre);
        printf("Tipo: ");
        scanf("%s", &personajes[contador].tipo);
        printf("Fuerza:");
        scanf("%f", &personajes[contador].fuerza);
        printf("Salud: ");
        scanf("%i", &personajes[contador].salud);
        contador++;
    }
    else
    {
     printf("El arreglo de personajes esta lleno.");
    }
}

void mostrar_personajes(){
    for (int i = 0; i < contador; i++)
    {
        printf("\n========\nEl nombre del personaje %i es: %s\nTipo: %s", i+1, personajes[i].nombre, personajes[i].tipo);
        printf("\nFuerza: %f \nSalud: %i\n=======", personajes[i].fuerza, personajes[i].salud);
    }
    
}

#endif