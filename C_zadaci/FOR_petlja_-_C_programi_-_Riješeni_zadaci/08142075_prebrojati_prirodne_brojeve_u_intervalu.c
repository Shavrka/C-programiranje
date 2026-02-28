/*
 * ZADATAK 184 - 08142075
 * Prebrojati prirodne brojeve u intervalu od k do n koji su djeljivi sa l.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08142075.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, l, br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);
printf("Djelilac: ");
scanf ("%d", &l);

for (i=k; i <= n; ++i)
{
if(i%l==0)
br++;
}
printf("Djeljivih ima: %d", br);
return 0;
}