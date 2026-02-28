/*
 * ZADATAK 08112074 - 08112074
 * Prebrojati prirodne brojeve u intervalu od k do n koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112074.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, br;          // deklarisanje varijabli
printf("Od broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &k);          // ucitavanje vrijednosti varijable k sa tastature
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature
br = 0;                   // pocetna vrijednost

for (i=k; i <= n; ++i)    // petlja od k do n
if(i %3 == 0)         // djeljiv sa 3?
br++;             // uvecaj brojac, br = br + 1;

printf("Djeljivih sa 3 ima: %d", br); // ispis

return 0;
}