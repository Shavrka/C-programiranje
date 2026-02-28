/*
 * ZADATAK 19 - 08111044
 * Ispisati prirodne brojeve od 1 do 5 koji nisu djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111044.htm
 */

#include <stdio.h>

int main()
{
int i;                            // deklarisanje varijable i
printf("Nisu djeljivi sa 3 od 1 do 5 \n"); // naslov   \n - prelazak u novi red
for(i = 1; i <= 5; i++)           // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 3 != 0)                // i nije djeljivo sa 3?
printf("%d ",i);          // i nije djeljivo sa 3: ispis i
return 0;
}