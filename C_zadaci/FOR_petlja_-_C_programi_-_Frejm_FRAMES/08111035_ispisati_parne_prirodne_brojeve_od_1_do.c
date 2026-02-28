/*
 * ZADATAK 08111035 - 08111035
 * Ispisati parne prirodne brojeve od 1 do 17.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111035.htm
 */

#include <stdio.h>

int main()
{
printf("Parni od 1 do 17\n");    // naslov   \n - prelazak u novi red
for(int i=1; i <= 17; i++)       // ponavljanje za i=2 do i=17 sa koramom +2 - pocetak petlje
if(i % 2 == 0)               // i parno (broj djeljiv sa 2)? - provjera da li je broj paran (djeljiv sa 2)
printf("%d ",i);         // i parno (broj djeljiv sa 2): ispis parno i

return 0;
}

II varijanta
#include <stdio.h>

int main()
{
int i;                            // deklarisanje varijable i
printf("Parni od 1 do 17\n");    // naslov   \n - prelazak u novi red
for(i = 2; i <= 17; i = i + 2)   // ponavljanje za i=2 do i=17 - pocetak petlje
printf("%d ",i);             // i parno (broj djeljiv sa 2): ispis parno i

return 0;
}