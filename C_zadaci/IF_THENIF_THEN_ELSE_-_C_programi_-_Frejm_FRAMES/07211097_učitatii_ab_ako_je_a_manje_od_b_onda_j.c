/*
 * ZADATAK 07211097 - 07211097
 * Učitatii a,b, ako je a manje od b onda je c=a-2b, inače je c=2a+b.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211097.htm
 */

#include <stdio.h>

int main()
{
int a, b, c;
printf("Ucitati 1. broj: ");
scanf("%d", &a);
printf("Ucitati 2. broj: ");
scanf("%d", &b);

if(a < b)
c = a - 2 * b;
else
c = 2 * a +  b;
printf("1. broj = %d   2. broj = %d  rezultat = %d\n", a, b, c);

return 0;
}