/*
 * ZADATAK 24010710 - 24010710
 * Za navedeni uslov izračunari sumu od k do n količnika (xk/k!.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010710.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define v 1e-5

int main()
{
double x,F,S=1,a;
int n=0;
printf("x:");
scanf("%lf", &x);
a=x;
F=sinh(x)+sqrt(sinh(x)*sinh(x)+1);
while(1)
{
if(abs(S-F) < v)
break;
S+=a;
a*=x/(n+2);
n++;
}
printf("\n\nTrazeni minimalni broj n je:%d\n\n",n);
printf("Tada je S=%lf, kao i F=%lf", S, F);
return 0;
}