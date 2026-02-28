/*
 * ZADATAK 38 - 08111008
 * Ispis paranih i neparnih prirodnih brojeva od 1 do n (test parnosti i neparnosti).
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111008.htm
 */

#include <stdio.h>

int main ()
{
int i, n;                 // deklarisanje varijabli i, n
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

for(i = 1; i <= n; ++i)   // ponavljanje za i=1 do i=n - pocetak petlje
if(i%2==0)            // paran?
printf("Paran broj %d\n", i);    // da, paran ispis
else
printf("Neparan broj %d\n", i);  // ne, neparan ispis
return 0;
}