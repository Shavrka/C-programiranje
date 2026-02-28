/*
 * ZADATAK 08112003 - 08112003
 * Izračunati i ispisati sumu kvadrata prvih n prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112003.htm
 */

#include <stdio.h>

int main ()
{
printf("Suma kvadrata brojeva od 1 do n\n"); // naslov
int i, s, n;                  // deklarisanje varijabli
printf("Do broja: ");         // ime varijable cija vrijednost se ucitava
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature
s = 0;                        // pocetna vrijednost kumulativne sume

for(i=1; i <= n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
s = s + i * i;             // kumulativna suma kvadratta brojeva
printf("Suma %d", s);         // ispis vrijednost s

return 0;
}

II varijanta    pow(i, 2)
// 08112003
#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main ()
{
printf("Suma kvadrata brojeva od 1 do n\n"); // naslov
int i, s, n;                  // deklarisanje varijabli
printf("Do broja: ");         // ime varijable cija vrijednost se ucitava
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature
s = 0;                        // pocetna vrijednost kumulativne sume
for(i=1; i <= n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
s = s + pow(i, 2);         // kumulativna suma kvadratta brojeva s = s + i * i
printf("Suma %d", s);         // ispis vrijednost s
return 0;
}