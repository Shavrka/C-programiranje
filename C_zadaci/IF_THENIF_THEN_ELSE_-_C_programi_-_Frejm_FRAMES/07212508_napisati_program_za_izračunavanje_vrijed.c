/*
 * ZADATAK 07212508 - 07212508
 * Napisati program za izračunavanje vrijednosti prema izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07212508.htm
 */

#include <stdio.h>

int main()
{
int b, y;

printf("Vas broj: ");
scanf("%d", &b);

if (b >= 0)     // ako je b vece ili jednako 0 ?
y = -1;     // b >= 0   ==>   y = -1
else            // inace
y = 1;      // y = 1

printf("y = %d", y);
return 0;
}