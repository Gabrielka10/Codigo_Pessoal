#include <stdio.h>

int main()
{
    struct horario       //definição de uma estrutura
    {
        int horas;
        int minutos;
        int segundos;
    };
    
    struct horario relogio; //declaração de uma estrutura
    
    relogio.horas = 03;     //inicialização dos membros da variavel da estrutura
    relogio.minutos = 46;
    relogio.segundos = 48;
    
    printf("%i:%i:%i", relogio.horas, relogio.minutos, relogio.segundos);
    
    
    return 0;
}

