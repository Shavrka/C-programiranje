/*
 * ZADATAK 133 - 07211103
 * Učitati četverocifren broj i ispisati njegovu najveću cifru.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211103.htm
 */

#include <stdio.h>

int main()
{
printf("Najveca cifra cetverocifrenog broja\n");

int cet, h, s, d, j, max; // deklarisanje varijabli
printf("Ucitati cetverocifren broj: ");
scanf("%d", &cet);       // ucitaj vrijednost

h = cet/1000;         // cifra hiljadica
s = ((cet%1000)/100); // cifra stotica
d = (cet%100)/10;     // cifra desetica
j = cet % 10;         // cifra jedinica

max = h;              // pocetna vrijednost maksimuma
if (s > max)          // cifra stotica najveca?
max = s;          // cifra stotica najveca
if (d > max)          // cifra desetica najveca?
max = d;          // cifra desetica najveca
if (j > max)          // cifra jedinica najveca?
max = j;          // cifra jedinica najveca

printf("Najveca cifra broja %d je %d ", cet, max);

return 0;
}