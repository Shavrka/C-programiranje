/*
 * ZADATAK 8 - 07211012
 * Sa tastature učitati dva broja (x i a). Varijabli z pridružiti vrijednost prema slijedećem izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211012.htm
 */

#include <stdio.h>

int main()
{
int a,x,z;

printf("Unesite varijablu X: ");
scanf("%d",&x);

printf("Unesite varijablu A: ");
scanf("%d",&a);

if(x > a )
z=x+a;
else
z=x-a;
printf("%d",z);

return 0;
}