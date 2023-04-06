#include <stdio.h>
#include <stdlib.h>

main(){
    int cod1, cod2, qtd1, qtd2;
    float v1, v2, tot;

    scanf("%d %d %f", &cod1, &qtd1, &v1);
    scanf("%d %d %f", &cod2, &qtd2, &v2);

    tot=(v1 * qtd1) + (v2 * qtd2);

    printf("VALOR A PAGAR: R$ %.2f\n", tot);

}