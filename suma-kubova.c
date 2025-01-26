#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, sumakubova;
    printf("Unesite prvi broj: ");
    scanf("%lf", &a);
    printf("Unesite drugi broj: ");
    scanf("%lf", &b);
    printf("Unesite treci broj: ");
    scanf("%lf", &c);
    sumakubova = pow(a, 3) + pow(b, 3) + pow(c, 3);
    printf("Suma kubova unesenih brojeva je:%.3lf.\n", sumakubova);
    return 0;

}