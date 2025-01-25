#include <stdio.h>
int main()
{
    int prviBroj, drugiBroj, zbir, razlika, proizvod;
    float kvocijent;
    printf("Unesite prvi broj: ");
    scanf("%d", &prviBroj);
    printf("Unesite drugi broj: ");
    scanf("%d", &drugiBroj);
    zbir = prviBroj + drugiBroj;
    razlika = prviBroj - drugiBroj;
    proizvod = prviBroj * drugiBroj;
    kvocijent =(float) prviBroj / drugiBroj;
    printf("Zbir je %d\n", zbir);
    printf("Razlika je %d\n", razlika);
    printf("Proizvod je %d\n", proizvod);
    printf("Kvocijent je %.2lf\n", kvocijent);
    return 0;
}