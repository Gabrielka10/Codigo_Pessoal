#include <stdio.h>

int main()
{
    struct horario{
      int horas;
      int minutos;
      int segundos;
      
    };
    
    struct horario teste[6] = {{10,20,30}, {20,30,40}, {30,40,50},
                               {40,50,60}, {50, 60,70}, {60, 70,80}};
    int i;
    for(i = 0; i < 6; ++i) {
      printf("%i: %i: %i\n",teste[i] . horas,
                            teste[i] . minutos,
                            teste[i] . segundos);  
        
    }

    return 0;
}

