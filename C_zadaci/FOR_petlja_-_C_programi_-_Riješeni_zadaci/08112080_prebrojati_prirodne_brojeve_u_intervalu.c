/*
 * ZADATAK 167 - 08112080
 * Prebrojati prirodne brojeve u intervalu od 1 do n koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112080.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

for (i=1; i<=n; ++i)
{
if(i%3==0)
br++;
}

printf("Djeljivih sa 3 ima: %d", br);
return 0;
}