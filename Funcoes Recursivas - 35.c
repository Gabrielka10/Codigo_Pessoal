#include <stdio.h>

int main()
{
    int fatorial(int x); //isso é uma declaracão de função
    int numero, resultado;
    
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    
    resultado = fatorial(numero); //chamando a função fatorial
    
    printf("O fatorial é: %i", resultado);
    
    
    
    return 0;
}
 int fatorial(int x){   // a função fora do main
 
    int resultado;
    
    if (x == 0) {
        resultado = 1;
    } else {
        resultado = x * fatorial(x - 1);
    }
 
     return resultado;
 }

