#include <stdio.h>
 
int main() {
 
    int numf, horas;
    float sh, tot;
    scanf("%d", &numf);
    scanf("%d", &horas);
    scanf("%f", &sh);

    tot = horas * sh;
    printf("NUMBER = %d\n", numf);
    printf("SALARY = U$ %.2f\n", tot);
 
    return 0;
}