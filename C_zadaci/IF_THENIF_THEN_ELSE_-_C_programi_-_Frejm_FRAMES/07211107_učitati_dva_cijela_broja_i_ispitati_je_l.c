/*
 * ZADATAK 07211107 - 07211107
 * Učitati dva cijela broja i ispitati je li manji broj neparan?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211107.htm
 */

#include <stdio.h>

int main()
{
printf("Od 2 ucitana cijela broja provjeriti da li je manji neparan\n");

int a, b, min;

printf("1. broj: ");
scanf("%d", &a);
printf("2.  broj: ");
scanf("%d", &b);

min = a;                // pocetna vrijednost minimuma
if (b < min)            // drugi broj manji?
min = b;            // drugi broj manji

if (min % 2 != 0)
printf("Manji broj %d je neparan", min);
else
printf("Manji broj %d paran", min);

return 0;
}