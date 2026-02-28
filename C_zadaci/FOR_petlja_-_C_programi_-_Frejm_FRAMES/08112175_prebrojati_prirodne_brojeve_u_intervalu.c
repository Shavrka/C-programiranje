/*
 * ZADATAK 08112175 - 08112175
 * Prebrojati prirodne brojeve u intervalu od k do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112175.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, a, br;        // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);           // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);           // upis broja do kojeg se ispisuje
printf("Djelilac: ");
scanf ("%d", &a);          // vrijednosti djelioca
br = 0;                    // pocetna vrijednost proizvoda

for (i=k; i <= n; ++i)     // petlja od k do n
if (i % a != 0)        // nije djeljiv sa a?
br++;              // uvecaj brojac br = br + 1;

printf("Od %d do %d ima: %d koji nisu djeljivi sa %d ", k, n, br, a); // ispis vrijednosti

return 0;
}