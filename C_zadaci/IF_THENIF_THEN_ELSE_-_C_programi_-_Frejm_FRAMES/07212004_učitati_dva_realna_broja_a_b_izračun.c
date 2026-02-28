/*
 * ZADATAK 07212004 - 07212004
 * Učitati dva realna broja (a, b), izračunati z prema izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07212004.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()

{
int a,b,suma;

printf("Unesite vase brojeve: ");
scanf("%d %d",&a,&b);

if(a > b)
suma=2*a+b;
else
suma=a-2*b;

printf("%d",suma);

return 0;
}