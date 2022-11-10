#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite 2 numero inteiros:\n");
    scanf("%i %i", &num1, &num2);
    
    if (num2 == 0)
        printf ("Divisão por 0 não valida");
    else {     
        if (num1 % num2 ==0){
            printf ("%i e divisível  por %i.\n", num1, num2);    
        }
        else{
            printf("%i não é divisível  por %i.\n", num1, num2);
        }
}
    return 0;
}

