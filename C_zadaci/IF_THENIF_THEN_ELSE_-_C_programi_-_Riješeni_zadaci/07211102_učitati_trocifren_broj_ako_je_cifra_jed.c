/*
 * ZADATAK 135 - 07211102
 * Učitati trocifren broj. Ako je cifra jedinica parna ispisati cifru stotica, inače ispisati cifru desetica.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211102.htm
 */

#include <stdio.h>

int main()
{
printf("Cifra jedinica parna ispisati stoticu inace deseticu");

int tro, s, d, j;
printf("\nUcitati trocifren broj: ");
scanf("%d", &tro);

s = tro/100;         // cifra stotica
d = (tro%100)/10;    // cifra desetica
j = tro % 10;        // cifra jedinica

if (j % 2 == 0)     // cifra jedinica parna?
printf("Cifra stotica je %d ", s);
else
printf("Cifra desetica je %d ", d);

return 0;
}