/*
 * ZADATAK 08111005 - 08111005
 * Ispisati prirodne brojeve od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111005.htm
 */

#include <stdio.h>

int main()
{
int i;                       // deklarisanje varijable i
printf("Ispis 1 do 5 \n");   // naslov   \n - prelazak u novi red
for(i = 1; i <= 5; i++)      // ponavljanje za i=1 do i=5 - pocetak petlje
printf("i = %d\n", i);   // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}

II varijanta  for(int i = 1;
// 08111005
// Ispis prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
printf("Ispis 1 do 5 \n");   // naslov   \n - prelazak u novi red
for(int i = 1; i <= 5; i++)  // deklarisanje varijable i; ponavljanje za i=1 do i=5 - pocetak petlje
printf("i = %d\n", i);   // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}