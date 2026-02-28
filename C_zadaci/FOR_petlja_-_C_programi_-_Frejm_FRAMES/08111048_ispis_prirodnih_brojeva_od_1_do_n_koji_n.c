/*
 * ZADATAK 08111048 - 08111048
 * Ispis prirodnih brojeva od 1 do n koji nisu djeljivi sa 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111048.htm
 */

#include <stdio.h>

int main ()
{
printf("Ispis brojeva 1-n - nisu djeljivi sa 5 \n"); // naslov  \n ima za posljedicu prelazak u novi red
int i, n;                    // deklarisanje varijabli
printf("Do broja: ");        // ime varijable cija vrijednost se ucitava
scanf("%d", &n);             // ucitavanje vrijednosti varijable n sa tastature

for (i=1; i<=n; ++i)         // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 5 != 0)           // provjera da li broj nije djeljiv sa 5
printf("%d\n", i);   // \n - novi red poslije svakog ispisa

return 0;
}