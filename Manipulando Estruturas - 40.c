#include <stdio.h>

int main()
{
    struct horario      
    {
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };
    
    struct horario relogio; 
    
    relogio.horas = 15;     
    relogio.minutos = 17;
    relogio.segundos = 30;
    
    struct horario depois;
    depois.horas = relogio.horas + 10;
    depois.minutos = relogio.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';
    
    printf("%i:\n%i:\n %f\n %c\n", depois.horas, depois.minutos,
                                        depois.teste, depois.letra);
    
    
    return 0;
}

