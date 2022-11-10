#include <stdio.h>

int main()
{
    int contador;
    int numero = 10000;
    
    for (contador = 1; contador <= 10; contador = contador + 8) {
        printf("teste\n");
        printf("brasil = %i\n", numero);
    }
    

    return 0;
}

