#include <stdio.h>
#include <stdlib.h>

main(){
    float velocidade, tempo, gasolina, distancia;

    scanf("%f", &tempo);
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    
    gasolina = distancia / 12;
    printf("%.3f\n", gasolina);

}