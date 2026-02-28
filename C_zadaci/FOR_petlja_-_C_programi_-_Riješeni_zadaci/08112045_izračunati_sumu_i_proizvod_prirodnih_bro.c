/*
 * ZADATAK 151 - 08112045
 * Izračunati sumu i proizvod prirodnih brojeva od k do n. Koristiti jednu i dvije petlje.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112045.htm
 */

#include <stdio.h>

int main ()
{
int k,n,p=1,s=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

for (i=k; i <= n; ++i)
{
s=s+i;
p=p*i;
}
printf("Suma iznosi: %d", s);
printf("Proizvod iznosi: %d", p);
return 0;
}