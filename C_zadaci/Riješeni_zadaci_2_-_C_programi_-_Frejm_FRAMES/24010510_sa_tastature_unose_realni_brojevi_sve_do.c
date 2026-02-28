/*
 * ZADATAK 24010510 - 24010510
 * Sa tastature unose realni brojevi sve dok se ne unese broj 0. Ispisuje se aritmetička i geometrijska sredina unesenih brojeva, ne računajući unesenu nulu.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010510.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double broj;
double s=0, p=1;
double brojac=0;
printf("Unesi broj:");
scanf("%lf", &broj);
while(broj!=0)
{
brojac++;
s = s + broj;
p = p * broj;
printf("Unesi broj:");
scanf("%lf", &broj);
}
double as = s / brojac;
double gs = pow(p, 1 / brojac);
printf("Aritmeticka sredina unesenih brojeva je %lf, a geometrijska sredina je %lf", as, gs);
return 0;
}