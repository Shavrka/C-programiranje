/*
 * ZADATAK 08111030 - 08111030
 * Napisati program za ispis prirodnih brojeva od 3 do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111030.htm
 */

#include <stdio.h>

int main()
{
printf("Ispis brojeva od 3 do n\n"); // naslov
int i, n;                 // deklarisanje varijabli i, n
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

for(i=3; i<=n; ++i)       // ponavljanje za i=1 do i=n - pocetak petlje
printf("i= %d\n", i);  // ispis vrijednost i
return 0;
}