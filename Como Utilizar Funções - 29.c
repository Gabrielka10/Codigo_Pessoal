#include <stdio.h>

int main()
{
    float calcularAreaRetangulo(float x, float y);
    
     float area = calcularAreaRetangulo(10.0, 20.0);
     
     printf("A area do retangulo é:%f", area);

    return 0;
}

float calcularAreaRetangulo(float base, float altura){
   float area = base * altura;
    
    return area;
}
