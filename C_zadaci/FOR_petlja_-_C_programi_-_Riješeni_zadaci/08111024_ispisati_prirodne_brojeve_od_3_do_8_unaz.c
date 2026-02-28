/*
 * ZADATAK 5 - 08111024
 * Ispisati prirodne brojeve od 3 do 8 unazad.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111024.htm
 */

#include <stdio.h>

int main()
{
int i;                        // deklarisanje varijable i
printf( "8 do 3 \n");         // naslov   \n - prelazak u novi red
for(i=8; i>=3; i--)           // ponavljanje za i=8 do i=3 - pocetak petlje
printf("i = %d\n", i);    // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red

return 0;
}

II Varijanta  for(int i=8;
// 08111024
#include <stdio.h>

int main()
{
printf( "8 do 3 \n");         // naslov   \n - prelazak u novi red
for(int i=8; i>=3; i--)       // deklarisanje varijable i; ponavljanje za i=8 do i=3 - pocetak petlje
printf("i = %d\n", i);    // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red

return 0;
}