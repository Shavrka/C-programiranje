/*
 * ZADATAK 08111023 - 08111023
 * Ispis prirodnih brojeve od 3 do 8.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111023.htm
 */

#include <stdio.h>

int main()
{
int i;                        // deklarisanje varijable i
printf("3 do 8 \n");          // naslov   \n - prelazak u novi red
for(i=3; i <= 8; i++)         // ponavljanje za i=3 do i=8 - pocetak petlje
printf("i = %d\n", i);    // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}

II Varijanta  for(int i=1;
// 08111023
// Ispis prirodnih brojeva od 3 do 8
#include <stdio.h>

int main()
{
printf("3 do 8 \n");          // naslov   \n - prelazak u novi red
for(int i=3; i <= 8; i++)     // deklarisanje varijable i; ponavljanje za i=3 do i=8 - pocetak petlje
printf("i = %d\n", i);    // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}