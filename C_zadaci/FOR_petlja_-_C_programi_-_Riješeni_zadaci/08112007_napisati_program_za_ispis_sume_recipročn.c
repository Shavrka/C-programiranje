/*
 * ZADATAK 57 - 08112007
 * Napisati program za ispis sume recipročnih vrijednosti prvih n prirodnih brojeva (harmonijski niz: 1 + 1/2 + 1/3 + ... + 1/n)
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112007.htm
 */

#include <stdio.h>
int main ()
{
int i,n;
float suma;

printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

for(i=1; i <= n; ++i)     // ponavljanje za i=1 do i=n - pocetak petlje
suma += (1.0/i);      // uvecaj sumu

printf("Suma reciprocnih vrijednosti je: %f", suma); // ispis

return 0;
}