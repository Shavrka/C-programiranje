/*
 * ZADATAK 15 - 07211004
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211004.htm
 */

#include <math.h>
#include <stdio.h>

int main()
{
int a;
float y;
printf("Ukucajte broj a ";
scanf("%d", &a);
if (a%2==1)
y=1./a;
else
y=1./(a+1);
printf("broj je %e \n", y);

return 0;
}