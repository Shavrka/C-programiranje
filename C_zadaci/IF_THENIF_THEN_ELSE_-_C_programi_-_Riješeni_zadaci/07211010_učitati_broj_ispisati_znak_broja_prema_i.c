/*
 * ZADATAK 1 - 07211010
 * Učitati broj ispisati znak broja prema izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211010.htm
 */

#include <stdio.h>

int main()

{
int x,z;

printf("Vas broj: ");
scanf("%d",&x);

if(x >= 0)     // ako je x vece ili jednako 0 ?
z=1;       // x >= 0   ==>   z = 1
else           // inace
z=0;       // z = 0

printf("Vrijednost izraza je: %d",z);
return 0;
}