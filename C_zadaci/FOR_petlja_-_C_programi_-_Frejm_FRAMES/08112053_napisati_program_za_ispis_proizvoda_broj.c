/*
 * ZADATAK 08112053 - 08112053
 * Napisati program za ispis proizvoda brojeva od 1 do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112053.htm
 */

#include <stdio.h>

int main (void)
{
int i, n, a;             // deklarisanje varijabli
float;                   // deklarisanje varijabli

printf("Do broja: ");    // ime varijable cija vrijednost se ucitava
scanf("%d", &n);         // ucitavanje vrijednosti varijable n sa tastature

printf("Djelilac: ");
scanf("%d",&a);          // ulaz a
p = 1.;                  // pocetna vrijednost

for (i=1; i<= n; i++)    // petlja od 1 do n
if (i % a == 0)      // djeljiv sa a?
p = p * i;       // nova vrijednost proizvoda

printf("Proizvod je %f", p); // ispis

return 0;
}