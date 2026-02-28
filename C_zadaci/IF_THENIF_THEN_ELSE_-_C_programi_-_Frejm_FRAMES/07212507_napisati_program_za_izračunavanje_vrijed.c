/*
 * ZADATAK 07212507 - 07212507
 * Napisati program za izračunavanje vrijednosti prema izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07212507.htm
 */

#include <stdio.h>

int main()
{
int a, y;

printf("Vas broj: ");
scanf("%d", &a);

if (a >= 0)     // ako je a vece ili jednako 0 ?
y = 1;      // a >= 0   ==>   y = 1
else            // inace
y = -1;     // y = -1

printf("y = %d", y);
return 0;
}