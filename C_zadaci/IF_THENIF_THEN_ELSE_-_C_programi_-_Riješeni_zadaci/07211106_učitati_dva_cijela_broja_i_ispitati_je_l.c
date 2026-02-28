/*
 * ZADATAK 46_4 - 07211106
 * Učitati dva cijela broja i ispitati je li veći broj paran?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211106.htm
 */

#include <stdio.h>

int main()
{
printf("Od 2 ucitana cijela broja provjeriti da li je veci paran\n");

int a, b, max;

printf("1. broj: ");
scanf("%d", &a);
printf("2.  broj: ");
scanf("%d", &b);

max = a;                // pocetna vrijednost maksimuma
if (b > max)            // drugi broj veci?
max = b;            // drugi broj veci

if (max % 2 == 0)
printf("Veci broj %d je paran", max);
else
printf("Veci broj %d nije paran", max);

return 0;
}