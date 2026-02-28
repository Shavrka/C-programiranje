/*
 * ZADATAK 08111031 - 08111031
 * Ispis kvadrata prirodnih brojeva do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111031.htm
 */

#include <stdio.h>

int main ()
{
printf("Ispis kvadrata brojeva od 1 do n\n"); // naslov
int i, n;                     // deklarisanje varijabli
printf("Do broja: ");         // ime varijable cija vrijednost se ucitava
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature

for(i=1; i <= n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
printf("%d\n", i*i);       // ispis

return 0;
}

II varinata pow(i, 2)
// 08111031
#include <stdio.h>
#include <math.h>            // ukljucenje bibliteke math.h za funkciju pow()

int main ()
{
printf("Ispis kvadrata brojeva od 1 do n\n"); // naslov
int i, n;                     // deklarisanje varijabli
printf("Do broja: ");         // ime varijable cija vrijednost se ucitava
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature

for(i=1; i <= n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
printf("%lf\n", pow(i, 2)); // ispis

return 0;
}