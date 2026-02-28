/*
 * ZADATAK 08112075 - 08112075
 * Prebrojati prirodne brojeve u intervalu od 1 do n koji su djeljivi sa l.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112075.htm
 */

#include <stdio.h>

int main ()
{
int i,n,l,br=0;
printf("Do broja: ");
scanf ("%d", &n);
printf("Djelilac: ");
scanf ("%d", &l);

for (i=1; i<=n; ++i)
{
if(i%l==0)
br++;}
}

printf("Djeljivih ima: %d", br);
return 0;
}