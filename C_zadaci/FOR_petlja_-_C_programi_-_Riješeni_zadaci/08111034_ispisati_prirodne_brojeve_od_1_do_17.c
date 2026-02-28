/*
 * ZADATAK 3 - 08111034
 * Ispisati prirodne brojeve od 1 do 17.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111034.htm
 */

#include <stdio.h>

int main()
{
int i;                        // deklarisanje varijable i
printf("1 do 17 \n");         // naslov   \n - prelazak u novi red
for(i=1; i <= 17; i++)        // ponavljanje za i=1 do i=17 - pocetak petlje
printf("i = %d\n", i);    // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}

// 08111034
// Ispis prirodnih brojeva od 1 do 17
#include <stdio.h>

int main()
{
printf("1 do 17 \n");         // naslov   \n - prelazak u novi red
for(int i=1; i <= 17; i++)    // deklarisanje varijable i; ponavljanje za i=1 do i=17 - pocetak petlje
printf("i = %d\n", i);    // ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}