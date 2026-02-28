/*
 * ZADATAK 08112041 - 08112041
 * Proizvod prirodnih od 1 do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112041.htm
 */

#include <stdio.h>

int main ()
{
int i, n;               // deklarisanje varjabli
float p=1;              // pocetna vrijednost kumulativnog proizvoda

printf("Do broja: ");
scanf("%d",&n);         // ulaz n

for(i=1; i <= n; i++)   // i=1; for(;i<=n;i++)
p*=i;               // uvecaj proizvod

printf("Proizvod je: %f",p);  // ispis

return 0;
}