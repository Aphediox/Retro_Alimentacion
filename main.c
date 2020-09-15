#include <stdio.h>
void capturar_enteros(){
    int enteros[5];
    int suma=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);

    
}
int main(){
    char op;
    do
    {
     printf(" \t\t==========Menu=========\n");
     printf("1) Capturar 5 numeros enteros. \n");
     printf("2) Mostrar n veces un arreglo. \n");
     printf("3) Crear personajes. \n");
     printf("0) Salir.\n");
     scanf("%c", &op);
     switch (op)
     {
     case '1':
        capturar_enteros();
         break;
     case '2':
        break;
     case '3':
        break;
     default:
        break;
     }
    } while (op!='0');
    
    
    return 0;
}