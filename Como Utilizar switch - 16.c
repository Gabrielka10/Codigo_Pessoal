#include <stdio.h>

int main()
{
    
    int i;
    
    printf ("Insira um numero inteiro de 1 a 5\n");
    scanf("%i", &i);
    
    switch (i) {
        case 1:
            printf("primeiro\n");
            break;
    case 2:
        printf("segundo\n");
        break;
    
    default:
        printf("Opção invalida");
        break;


    return 0;
}

}
