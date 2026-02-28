/*
 * ZADATAK 142 - 07211112
 * Učitati 3 trocifrena broja i ispisati onaj broj čija je cifra desetica najmanja.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211112.htm
 */

#include<stdio.h>

int main()
{
printf("Od 3 ucitana cetverocifrena broja ispisati onaj sa najmanjom cifrom desetice");

int tro1, tro2, tro3, d1, d2, d3, min, minbr;

printf("\nUcitati 1. trocifren broj: ");
scanf("%d", &tro1);
printf("Ucitati 2. trocifren broj: ");
scanf("%d", &tro2);
printf("Ucitati 3. trocifren broj: ");
scanf("%d", &tro3);

d1 = (tro1 % 100) /10;         // cifra desetica 1. trocifrenog broja
d2 = (tro2 % 100) /10;         // cifra desetica 2. trocifrenog broja
d3 = (tro3 % 100) /10;         // cifra desetica 3. trocifrenog broja

min = d1;               // pocetna vrijednost maksimuma
minbr = tro1;           // prvi broj pocetni maksimuma
if (d2 < min) {         // cifra desetica 2. broja manja?
min = d2;           // cifra desetica 2.broja novi min
minbr = tro2;       // broj sa vecom cifrom desetica
}
if (d3 < min) {        // cifra desetica 3. broja manja?
min = d3;           // cifra desetica 3.broja novi min
minbr = tro3;       // broj sa vecom cifrom desetica
}

printf("Najvecu cifru jedinca %d ima broj %d", min, minbr);

return 0;
}