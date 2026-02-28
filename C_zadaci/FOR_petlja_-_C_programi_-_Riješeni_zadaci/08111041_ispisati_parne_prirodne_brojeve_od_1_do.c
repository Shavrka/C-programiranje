/*
 * ZADATAK 11 - 08111041
 * Ispisati parne prirodne brojeve od 1 do 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111041.htm
 */

#include <stdio.h>

int main()
{
printf("Parni od 1 do 5 \n");    // naslov   \n - prelazak u novi red
for(int i=1; i<=5; i++)          // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 == 0)               // i parno (broj djeljiv sa 2)?
printf("%d\n",i);         // i parno (broj djeljiv sa 2): ispis parno i

return 0;
}

II varijanta     for(int i = 1;
// 08111041
// Ispis parnih prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
printf("Parni od 1 do 5 \n");    // naslov   \n - prelazak u novi red
for(int i = 1; i <= 5; i++)      // deklarisanje varijable i; ponavljanje za i=2 do i=5 - pocetak petlje
if(i % 2 == 0)               // i parno (broj djeljiv sa 2)?
printf("%d\n",i);        // i parno (broj djeljiv sa 2): ispis parno i

return 0;
}

III varijanta   for(i = 2;
// 08111041
// Ispis parnih prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
int i;                           // deklarisanje varijable i
printf("Parni od 1 do 5 \n");    // naslov   \n - prelazak u novi red
for(i = 2; i <= 5; i = i + 2)    // ponavljanje za i=2 do i=5 - pocetak petlje
printf("%d ",i);             // i parno (broj djeljiv sa 2): ispis parno i

return 0;
}