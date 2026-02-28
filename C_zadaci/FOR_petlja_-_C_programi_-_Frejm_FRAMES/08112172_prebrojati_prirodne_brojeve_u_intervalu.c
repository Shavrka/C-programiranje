/*
 * ZADATAK 08112172 - 08112172
 * Prebrojati prirodne brojeve u intervalu od k do n koji su djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112172.htm
 */

#include <stdio.h>

int main ()
{
printf("Od k do n - djeljivi sa 7\n");  // naslov
int i, k, n, br;        // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);        // ulaz k
printf("Do broja: ");
scanf("%d", &n);        // ulaz n
br = 0;                 // pocetna vrijednost brojaca

for(i=k; i <= n; ++i)   // ponavljanje za i=0 do i=n
if(i % 7 == 0)      // ako je i djeljiv sa 4 izvedi
br++;           // br=br+1;

printf("Ima nedjeljivih sa 7 = %d", br);  // ispis
return 0;
}