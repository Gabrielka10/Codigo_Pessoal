#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};    


int main()
{
    struct horario teste(struct horario x);
    
    
    struct horario agoraa;
    agoraa.horas = 10;
    agoraa.minutos = 42;
    agoraa.segundos = 58;
    
    struct horario proxima;
    proxima = teste(agoraa);    // funcao teste está chamando a estrutura "agora"
     
    printf("%i: %i: %i:", proxima.horas, proxima.minutos, proxima.segundos); 
    
    return 0;
}
struct horario teste(struct horario x) {
    printf("%i: %i: %i:\n", x.horas, x.minutos, x.segundos);
    
    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;
    
    
    return x;
    
}
