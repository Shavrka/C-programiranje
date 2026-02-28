/*
 * ZADATAK 08112173 - 08112173
 * Prebrojati prirodne brojeve u intervalu od k do n koji nisu djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112173.htm
 */

#include <stdio.h>

int main ()
{
printf("Od k do n - nisu djeljivi sa 7\n");  // naslov
int i, k, n, br;          // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

br=0;

for (i=k; i <= n; ++i)    // petlja od k do n
if(i %7 != 0)         // nije djeljiv sa 7?
br++;             // uvecaj brojac br = br + 1;

printf("Ima nedjeljivih sa 7 = %d", br);  // ispis

return 0;
}