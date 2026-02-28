/*
 * ZADATAK 20 - 07211017
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211017.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{
int a,b,y;
printf("Unesite vas broj a: ";
scanf("%d", &a);
printf("Unesite vas broj b: ";
scanf("%d", &b);
if(a%2!=0 && b%2!=0)
y=a+b;
else
y=a*b;
printf("%d", y);

return 0;
}