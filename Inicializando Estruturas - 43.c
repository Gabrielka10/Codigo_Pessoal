#include <stdio.h>

int main()
{
    struct horario{
    int horas;
    int minutos;
    int segundos;
    char letra;
    }agora = {10, 20, 30};
    
    //}agora = {.segundos = 10, .minutos = 20};
  
     
     printf("%i: %i: %i:\n%c", agora.horas, agora.minutos, agora.segundos,agora.letra);
    

    return 0;
}

