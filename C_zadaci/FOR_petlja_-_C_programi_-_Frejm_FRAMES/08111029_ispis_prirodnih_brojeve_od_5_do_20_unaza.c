/*
 * ZADATAK 08111029 - 08111029
 * Ispis prirodnih brojeve od 5 do 20 unazad.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111029.htm
 */

#include <stdio.h>

int main()
{
int i;                       // deklarisanje varijable i
printf( "20 do 5\n");        // naslov   \n - prelazak u novi red
for(i = 20; i >= 5; i--)     // ponavljanje za i=20 do i>=5, unazad - pocetak petlje
printf("%d\n", i);       // ispis
return 0;
}

II Varijanta  for(int i=20;
// 08111029
#include <stdio.h>

int main()
{
int i;                       // deklarisanje varijable i
printf( "20 do 5\n");        // naslov   \n - prelazak u novi red
for(int i=20; i >= 5; i--)   // deklarisanje varijable i; ponavljanje za i=20 do i>=5, unazad - pocetak petlje
printf("%d\n", i);       // ispis
return 0;
}