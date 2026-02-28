/*
 * ZADATAK 79 - 08112012
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 7 i sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112012.htm
 */

#include <stdio.h>
int main ()
{
float suma;
int i,n;

printf("Unesite N: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
if((i % 3 == 0) && (i % 7 == 0))
suma+=i;

printf("Suma brojeva je: %f",suma);

return 0;
}