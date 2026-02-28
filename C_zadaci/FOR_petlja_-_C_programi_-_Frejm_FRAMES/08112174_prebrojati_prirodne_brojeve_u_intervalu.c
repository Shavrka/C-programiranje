/*
 * ZADATAK 08112174 - 08112174
 * Prebrojati prirodne brojeve u intervalu od k do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112174.htm
 */

#include <stdio.h>

int main ()
{
printf("Prebrojati brojeve od k do n djeljive sa a\n"); // naslov
int i, k, n, a, br;        // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);           // ulaz k
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
printf("Unesi djelioca: ");
scanf("%d",&a);            // ulaz a
br=0;                      // pocetna vrijednost

for (i=k; i <= n; ++i)     // petlja od k do n
if (i % a == 0)        // djeljiv sa a?
br++;              // uvecaj brojac br = br + 1;

printf("Od %d do %d djeljivi sa %d ima: %d", k, n, a, br); // ispis

return 0;
}