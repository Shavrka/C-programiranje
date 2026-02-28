/*
 * ZADATAK 134 - 07211134
 * Učitati četverocifren broj i ispisati njegovu najmanju cifru.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211134.htm
 */

#include <stdio.h>

int main()
{
printf("Najmanja cifra cetverocifrenog broja\n");  // naslov

int cet, h, s, d, j, min; // deklarisanje varijabli
printf("Cetverocifren broj: "); // naslov
scanf("%d", &cet);       // ucitaj vrijednost

h = cet/1000;         // cifra hiljadica
s = ((cet%1000)/100); // cifra stotica
d = (cet%100)/10;     // cifra desetica
j = cet % 10;         // cifra jedinica

min = h;              // pocetna vrijednost minimuma
if (s < min)          // cifra stotica najmanja?
min = s;          // cifra stotica najmanja
if (d < min)          // cifra desetica najmanja?
min = d;          // cifra desetica najmanja
if (j < min)          // cifra jedinica najmanja?
min = j;          // cifra jedinica najmanja

printf("Najmanja cifra broja %d je %d ", cet, min);  // ispis

return 0;
}