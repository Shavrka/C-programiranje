/*
 * ZADATAK 08112001 - 08112001
 * Suma prvih n prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112001.htm
 */

#include <stdio.h>

int main ()
{
printf("Suma brojeva od 1 do n\n");  // naslov
int i, s, n;                  // deklarisanje varijabli
printf("Do broja: ");         // ime varijable cija vrijednost se ucitava
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature
s = 0;                        // pocetna vrijednost kumulativne sume
for(i=1; i <= n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
s = s + i;                // kumulativna suma brojeva
printf("Suma iznosi: %d", s); // ispis vrijednost s
return 0;
}

II varinata s += i
// 08112001
#include <stdio.h>

int main ()
{
printf("Suma brojeva od 1 do n\n");  // naslov
int i, s, n;                  // deklarisanje varijabli
printf("Do broja: ");         // ime varijable cija vrijednost se ucitava
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature
s = 0;                        // pocetna vrijednost kumulativne sume
for(i=1; i <= n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
s += i;                   // kumulativna suma brojeva s = s + i
printf("Suma iznosi: %d", s);  // ispis vrijednost s
return 0;
}