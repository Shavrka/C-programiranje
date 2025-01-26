#include <stdio.h>
int main()
{
    double a,b,c, asredina;
    printf("Unesite prvi broj: ");
    scanf("%lf", &a);
    printf("Unesite drugi broj: ");
    scanf("%lf", &b);
    printf("Unesite treci broj: ");
    scanf("%lf", &c);
    asredina = (a+b+c)/2;
    printf("Aritmeticka sredina tri unesena broja je: %.3lf.\n", asredina);
    return 0;
}