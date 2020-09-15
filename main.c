#include <stdio.h>
void capturar_enteros(){
    int enteros[5];
    int suma=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digita el numero %i de tu arreglo: ", i+1);
        scanf("%i", &enteros[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("El numero %i de tu arreglo es: %i\n", i , enteros[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);
}

void mostrar(int n,char cadena[]){
    for (int i = 0; i < n; i++)
    {
        printf("Cadena %i: %s", i+1 , cadena);
    }
    
}
int main(){
    char op;
    char cadena[20];
    int n;
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
        printf("Escribe una cadena de hasta 20 caracteres: ");
        fflush(stdin);
        fgets(cadena, sizeof(cadena), stdin);
        printf("Veces que lo vas a repetir: ");
        scanf("%i", &n);
        mostrar(n, cadena);
        break;
     case '3':
        break;
     default:
        break;
     }
     fflush(stdin);
    } while (op!='0');
    
    
    return 0;
}