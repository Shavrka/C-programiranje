/*
 * ZADATAK 08112011 - 08112011
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112011.htm
 */

#include <stdio.h>

int main()
{
printf("Suma od 1 do n djeljivih sa 7 \n");  // naslov
int i,n;                    // deklarisanje varjabli
double s;                   // deklarisanje varjable

printf("Do broja: ");
scanf("%d", &n);            // upis broja do kojeg se ispisuje
s=0;                        // pocetna vrijednost kumulativne sume
for (i = 1; i <= n; i++)    // ponavljanje za i=1 do i=n - pocetak petlje
if (i % 7 == 0)         // provjera da li je broj djeljiv sa 7
s = s + i;          // nova vrijednost sume
printf("Suma = %lf", s);    // ispis

return 0;
}