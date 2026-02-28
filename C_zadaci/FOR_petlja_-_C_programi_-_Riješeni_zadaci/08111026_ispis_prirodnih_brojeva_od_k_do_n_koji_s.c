/*
 * ZADATAK 44 - 08111026
 * Ispis prirodnih brojeva od k do n koji su djeljivi sa 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111026.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);

for (i = k; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
if( i %5 == 0)            // provjera da li je broj djeljiv sa 5
printf("%d\n", i);

return 0;
}