/*
 * ZADATAK 138 - 07211111
 * Učitati 3 trocifrena broja i ispisati onaj broj čija je cifra jedinica najveća.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211111.htm
 */

#include<stdio.h>

int main()
{
printf("Od 3 ucitana broja ispisati onaj sa najvecom cifrom jedince");

int tro1, tro2, tro3, j1, j2, j3, max, maxbr;

printf("\nUcitati 1. trocifren broj: ");
scanf("%d", &tro1);
printf("Ucitati 2. trocifren broj: ");
scanf("%d", &tro2);
printf("Ucitati 3. trocifren broj: ");
scanf("%d", &tro3);

j1 = tro1 % 10;         // cifra jedinca 1. trocifrenog broja
j2 = tro2 % 10;         // cifra jedinca 2. trocifrenog broja
j3 = tro3 % 10;         // cifra jedinca 3. trocifrenog broja

max = j1;               // pocetna vrijednost maksimuma
maxbr = tro1;           // prvi broj pocetni maksimuma
if (j2 > max) {         // cifra jedinca 2. broja veca?
max = j2;           // cifra jedinca 2.broja novi max
maxbr = tro2;       // broj sa vecom cifrom jedinca
}
if (j3 > max){         // cifra jedinca 3. broja veca?
max = j3;           // cifra jedinca 3.broja novi max
maxbr = tro3;       // broj sa vecom cifrom jedinca
}

printf("Najvecu cifru jedinca %d ima broj %d", max, maxbr);

return 0;
}