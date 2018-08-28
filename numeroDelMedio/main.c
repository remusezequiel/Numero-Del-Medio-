#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroDelMedio;
    int maximo=INT_MIN;
    int minimo=INT_MAX;
    //pido el numero uno
    printf("Ingrese un numero: \n");
    scanf(" %d", &numeroUno);

    maximo = numeroUno;
    minimo = numeroUno;

    //pido el numero dos
    printf("Ingrese un numero: \n");
    scanf(" %d", &numeroDos);
    //pido el numero tres
    printf("Ingrese un numero: \n");
    scanf(" %d", &numeroTres);
    //sentencias
    if(numeroDos > maximo)
        {
            maximo = numeroDos;
        }
    else if (numeroDos < minimo)
        {
            minimo = numeroDos;
        }
    else{
            numeroDelMedio = numeroDos;
        }

    if(numeroTres > maximo)
        {
            maximo = numeroTres;
        }
    else if (numeroTres < minimo)
        {
            minimo = numeroTres;
        }
    else{
            numeroDelMedio = numeroTres;
        }

    printf("El numero del medio es: %d ", numeroDelMedio);

    return 0;
}
