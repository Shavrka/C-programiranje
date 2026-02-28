/*
 * ZADATAK 71 - 08112020
 * Izračunati sumu neparnih prirodnih brojeva u intervalu od k do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112020.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n;              // deklarisanje varjabli
double s;                 // deklarisanje varjabli

printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

s = 0;                    // pocetna vrijednost kumulativne sume
for (i=k; i<=n; ++i)
if (i % 2 != 0)       // i neparno?
s = s + i;        // da, uvecaj s za vrijednosti i; s=s+i
printf("Suma neparnih od k do n iznosi: %lf", s);

return 0;
}