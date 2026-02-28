/*
 * ZADATAK 46_5 - 07211124
 * Učitati dva cijela broja i ispitati je li veći broj neparan?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211124.htm
 */

#include <stdio.h>

int main ()
{
int a, b, max;
printf("1. broj: ");     // ulaz
scanf("%d", &a);
printf("2. broj: ");
scanf("%d", &b);

max = a;                // pocetna vrijednost maksimuma
if (b > max)            // drugi broj veci?
max = b;            // drugi broj veci

if (max % 2 != 0)       // veci neparan?
printf("Veci broj %d je neparan",  max);   // veci neparan
else
printf("Veci broj %d je paran",  max); // veci paran
return 0;
}