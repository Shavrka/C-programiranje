/*
 * ZADATAK 07211009 - 07211009
 * Sa tastature upisati broj i izračunati njegovu  recipročnu vrijednost (y = 1 / x) i ispisati je. Ako je x=0 ispisati Dijeljenje sa nulom ispisati "Dijeljenje sa nulom".
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211009.htm
 */

#include <stdio.h>

int main()
{
float n;                                  // deklarisanje varijable                           //

printf("Unesite broj: ");
scanf("%e", &n);                          // ulaz

if (n ==0 )                               // ucitani broj je nula ?
printf("Djeljenje sa nulom \n");      // ispis
else                                      // nije nula
printf("Reciprocna vrijednost je: %e \n", 1/n);    // ispis

return 0;
}