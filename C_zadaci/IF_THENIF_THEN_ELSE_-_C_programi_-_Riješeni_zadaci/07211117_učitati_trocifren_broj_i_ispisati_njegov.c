/*
 * ZADATAK 131 - 07211117
 * Učitati trocifren broj i ispisati njegovu najveću cifru.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211117.htm
 */

#include <stdio.h>

int main()
{
printf("Najveca cifra trocifrenog broja\n");       // naslov

int tro, s, d, j, max;
printf("Ucitati trocifren broj: ");     // ucitati vriejdnost
scanf("%d", &tro);

s = tro/100;         // cifra stotica
d = (tro%100)/10;    // cifra desetica
j = tro % 10;        // cifra jedinica

max = s;            // pocetna vrijednost maksimuma
if (d > max)        // cifra desetica najveca?
max = d;        // cifra desetica najveca
if (j > max)        // cifra jedinica najveca?
max = j;        // cifra jedinica najveca
printf("Najveca cifra broja %d je %d ", tro, max);

return 0;
}