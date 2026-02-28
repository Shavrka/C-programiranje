/*
 * ZADATAK 64 - 07211020
 * Od tri upisana broja (a, b, c) sa tastature naći najmanji i recipročnu vrijednost najmanjeg.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211020.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{

float a,b,c,min,rec;

printf("Unesite tri broja:  \n");
scanf("%e, &a");
scanf("%e, &b");
scanf("%e, &c");
min=a;

if(b < min)
min=b;

if(c < min)
min=c;

printf("Od brojeva %e, %e i %e najmanji je %e \n", a, b, c, min);

if(min == 0)
{
rec=1/min;
printf("Reciprocna vrijednost najmanjeg je: %e \n");
}
else
printf("Dijeljenje sa nulom");

return 0;
}