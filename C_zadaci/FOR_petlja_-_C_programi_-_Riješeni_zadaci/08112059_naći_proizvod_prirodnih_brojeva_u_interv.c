/*
 * ZADATAK 150 - 08112059
 * Naći proizvod prirodnih brojeva u intervalu od k do n čija je cifra jedinica 4.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112059.htm
 */

#include <stdio.h>

int main ()
{
int k,n,p=1;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

for (i=k; i<=n; ++i)
{
if(i%10==4)
p=p*i;
}
printf("Proizvod iznosi: %d", p);
return 0;
}