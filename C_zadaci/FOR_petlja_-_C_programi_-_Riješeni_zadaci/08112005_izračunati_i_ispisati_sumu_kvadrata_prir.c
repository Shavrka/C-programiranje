/*
 * ZADATAK 56 - 08112005
 * Izračunati i ispisati sumu kvadrata prirodnih brojeva od k do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112005.htm
 */

#include <stdio.h>

int main ()
{
printf("Suma kvadrata brojeva od k do n\n"); // naslov
int i, s, n, k;           // deklarisanje varijabli
printf("Od broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &k);          // ucitavanje vrijednosti varijable k sa tastature
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature
s=0;                      // pocetna vrijednost sume je 0

for (i=k; i <= n; i++)    // ponavljanje za i=k do i=n - pocetak petlje
s = s + i * i;        // uvecaj sumu kvadrata
printf("Suma iznosi: %d", s);    // ispis
return 0;
}

II Varijanta
// 08112005
#include <stdio.h>
#include <math.h>            // ukljucenje bibliteke math.h za funkciju pow()

int main ()
{
printf("Suma kvadrata brojeva od k do n\n"); // naslov
int i, s, n, k;           // deklarisanje varijabli
printf("Od broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &k);          // ucitavanje vrijednosti varijable k sa tastature
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature
s=0;                      // pocetna vrijednost sume je 0

for (i=k; i <= n; i++)    // ponavljanje za i=k do i=n - pocetak petlje
s = s + pow(i, 2);    // uvecaj sumu kvadrata
printf("Suma iznosi: %d", s);    // ispis
return 0;
}