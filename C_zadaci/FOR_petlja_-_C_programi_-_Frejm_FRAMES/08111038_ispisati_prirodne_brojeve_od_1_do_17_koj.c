/*
 * ZADATAK 08111038 - 08111038
 * Ispisati prirodne brojeve od 1 do 17 koji nisu djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111038.htm
 */

#include <stdio.h>

int main()
{
int i;                             // deklarisanje varijable i
printf("Nisu djeljivi sa 3 od 1 do 17 \n");  // naslov   \n - prelazak u novi red
for(i = 1; i <= 17; i++)           // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % 3 != 0)                 // i nije djeljivo sa 3?
printf("%d ",i);           // i nije djeljivo sa 3: ispis i
return 0;
}