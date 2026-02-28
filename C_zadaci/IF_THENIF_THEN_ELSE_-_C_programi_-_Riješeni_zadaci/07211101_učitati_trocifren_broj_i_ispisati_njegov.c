/*
 * ZADATAK 132 - 07211101
 * Učitati trocifren broj i ispisati njegovu najmanju cifru.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211101.htm
 */

#include <stdio.h>

int main()
{
printf("Najmanja cifra trocifrenog broja");

int tro, s, d, j, min;
printf("\nUcitati trocifren broj: ");
scanf("%d", &tro);

s = tro/100;         // cifra stotica
d = (tro%100)/10;    // cifra desetica
j = tro % 10;        // cifra jedinica

min=s;              // pocetna vrijednost minimuma
if (d < min)        // cifra desetica najmanja?
min=d;          // cifra desetica najmanja
if (j < min)        // cifra jedinica najmanja?
min=j;          // cifra jedinica najmanja
printf("Najmanja cifra broja %d je %d ", tro, min);

return 0;
}