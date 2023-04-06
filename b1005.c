#include <stdio.h>
#include <stdlib.h>

main(){
    float nota1, nota2, media;
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    nota1 = nota1 * 3.5;
    nota2 = nota2 * 7.5;

    media = (nota1 + nota2) / 11;

    printf("MEDIA = %.5f\n", media);

}