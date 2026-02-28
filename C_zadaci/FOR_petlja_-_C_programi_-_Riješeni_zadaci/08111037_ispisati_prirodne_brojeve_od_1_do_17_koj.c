/*
 * ZADATAK 18 - 08111037
 * Ispisati prirodne brojeve od 1 do 17 koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111037.htm
 */

#include <stdio.h>

int main()
{
int i;                                  // deklarisanje varijable i
printf("Djeljivi sa 3 od 1 do 17 \n");  // naslov   \n - prelazak u novi red
for(i = 1; i <= 17; i++)                // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % 3 == 0)                      // i djeljivo sa 3?
printf("%d ",i);                // i djeljivo sa 3: ispis i

return 0;
}