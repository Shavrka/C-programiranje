/*
 * ZADATAK 7 - 08111028
 * Ispis brojeva od 1 do 20 u obliku: 1 2 3 4 5 6 7 8 9 ......20
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111028.htm
 */

#include <stdio.h>

int main()
{
int i;                      // deklarisanje varijable i
printf( "Ispis brojeva od 1 do 20 u istoj liniji\n");   // naslov   \n - prelazak u novi red
for(i=1; i <= 20; i++)     // ponavljanje za i=1 do i=20 - pocetak petlje
printf("%d ", i);      // ispis vrijednosti i zatim razmak iz broja

return 0;
}