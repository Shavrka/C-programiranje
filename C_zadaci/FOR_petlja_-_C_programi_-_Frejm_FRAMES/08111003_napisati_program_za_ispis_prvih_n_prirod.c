/*
 * ZADATAK 08111003 - 08111003
 * Napisati program za ispis prvih n prirodnih brojeva unazad.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111003.htm
 */

#include <stdio.h>

int main ()
{
int i, n;                 // deklarisanje varijabli i, n
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

for (i = n; i >= 1; i--)  // petlja od n do 1, step je negativan
printf("%d\n", i);   // ispis
return 0;
}