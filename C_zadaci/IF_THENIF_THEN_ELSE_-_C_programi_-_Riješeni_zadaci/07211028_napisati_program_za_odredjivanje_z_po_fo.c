/*
 * ZADATAK 4 - 07211028
 * Napisati program za odredjivanje z po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211028.htm
 */

#include <stdio.h>

int main()
{
int x,y,z;

printf("Vas 1. broj ");
scanf("%d",&x);

printf("Vas 2. broj ");
scanf("%d",&y);

if((x - y) < 2)     // ako je x-y manje od dva ?
z = x + y;      // (x - y) < 2   ==>   z = x + y
else                // inace
z = x - y;      // z = x - y

printf("Vrijednost izraza je: %d", z);

return 0;
}