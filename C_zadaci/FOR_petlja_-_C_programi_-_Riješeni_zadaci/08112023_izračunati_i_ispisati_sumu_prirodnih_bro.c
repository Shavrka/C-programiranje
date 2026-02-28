/*
 * ZADATAK 74 - 08112023
 * Izračunati i ispisati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112023.htm
 */

#include <stdio.h>

int main()
{
int i,n;
double s;

printf("Do broja: ");
scanf("%d",&n);

s=0;
for (i=1; i<=n; ++i)
{
if (i % 3 == 0)	{
s=s+i;
}
printf("Suma djeljivih sa 3 od 1 do n iznosi: %lf",as);

return 0;
}