/*
 * ZADATAK 24011630 - 24011630
 * Na osnovu Simpsonovog pravila:... Napisati funkciju “Integral“ koja prima kao parametre f, a, b i n ( f je pokazivač na funkciju čiji se integral računa) a koja kao rezultat daje približnu vrijednost integrala. Napisanu funkciju testirajte na primjerima integrala funkcije sin x na intervalu (0, Pi), zatim funkcije x3na intervalu (0, 10), i funkcije 1/x na intervalu (1, 2).
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011630.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
double A,B,r;
scanf("%d", &n);
scanf("%lf", &A);
scanf("%lf", &B);
r=Integral(F,A,B,n);
printf("\n%.2lf", r);
return 0;
}