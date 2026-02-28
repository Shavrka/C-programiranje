/*
 * ZADATAK 30 - 08111009
 * Napisati program za ispis dvostruke vrijednosti prvih n prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111009.htm
 */

#include <stdio.h>

int main ()
{
int i, n;                 // deklarisanje varijabli i, n
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

for (i = 1; i <= n; i++)  // ponavljanje za i=1 do i=n - pocetak petlje
printf("i = %d  dvostruka vrijednost = %d\n", i, 2*i);  // ispis
return 0;
}