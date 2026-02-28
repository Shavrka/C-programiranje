/*
 * ZADATAK 7 - 07211041
 * Sa tastature učitati broj x. Varijabli z pridružiti vrijednost prema slijedećem izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211041.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
int z,x;

printf("Unesite varijablu x: ");
scanf("%d",&x);

if(x > 2)
z=x+2;
else
z=x-2;
printf("%d",z);

return 0;
}