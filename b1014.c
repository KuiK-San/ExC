#include <stdio.h>
#include <stdlib.h>

main(){
    int km;
    float litro, tot;

    scanf("%d", &km);
    scanf("%f", &litro);

    tot = km/litro;

    printf("%.3f km/l\n", tot);
}