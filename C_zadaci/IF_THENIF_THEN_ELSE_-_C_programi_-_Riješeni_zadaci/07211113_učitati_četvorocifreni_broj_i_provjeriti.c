/*
 * ZADATAK 149 - 07211113
 * Učitati četvorocifreni broj i provjeriti da li je palindrom. Broj je palindrom ako se čita isto sprijeda i odpozadi. Primjer: 1331
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211113.htm
 */

#include<stdio.h>

int main()
{
printf("Cetverocifreni broj palindrom?");

int broj, j, d, s, h;

printf("\nCetverocifreni broj: ");
scanf("%d", &broj);

h = broj /1000;             // cifra hiljadica
s = (broj % 1000) /100;     // cifra stotica
d = (broj % 100) /10;       // cifra desetica
j = broj % 10;              // cifra jedinica

if (h == j && s == d)       // cifra hiljadica = cifri jedinica i cifra stotica = cifri desetica?
printf("Broj %d je palindrom", broj);     // h = j  i  s = d
else
printf("Broj %d nije palindrom", broj);   // h <> j  ili  s <> d

return 0;
}