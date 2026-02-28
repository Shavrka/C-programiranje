/*
 * ZADATAK 24010930 - 24010930
 * Koristeći Heronov postupak (algoritam) za računanje kvadratnog korijena proizvoljnog broja x (formira se niz brojeva a0, a1, a2 itd. po sljedećem pravilu: a0 = 1; ak+1 = (ak + x / ak) / 2 za k > 0)
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010930.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double x;
scanf("%lf", &x);
korijen(x);
printf("%.2lf", sqrt(x));
return 0;
}