#include <stdio.h>

int main()
{
    
    
    void funcaoPrint(int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10};
    
    funcaoPrint(x, vetor);
    printf("_______________________________________________________\n");
    
    printf("Variavel int na função principal = %i \n", x);
    printf("Vetor na função principal = %i\n\n", vetor[1]);
    
       return 0;
}
 
void funcaoPrint(int x, int vetor[]) {
    x = x + 10;
    vetor[1] = 20;
    
    printf("Variavel int na função print = %i\n", x);
    printf("Vetor na função print = %i\n", vetor[1]);
    
}
