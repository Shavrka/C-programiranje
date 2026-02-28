/*
 * ZADATAK 08112025 - 08112025
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112025.htm
 */

#include <stdio.h>

int main()
{
printf("Suma k - n - nisu djeljivi sa 7\n"); // naslov
int i,n;                  // deklarisanje varjabli
double s;                 // deklarisanje varjable

printf("Do broja: ");
scanf("%d",&n);           // upis broja do kojeg se ispisuje

s = 0;                    // pocetna vrijednost
for (i = 1; i <= n; ++i)  // ponavljanje za i = 1 do i = n - pocetak petlje
if (i % 7 != 0)       // provjera da li broj nije djeljiv sa 7
s = s + i ;       // nije djeljiv sa 7, nova suma

printf("Suma nedjeljivih sa 7 od 1 do n iznosi: %lf", s);  // ispis

return 0;
}