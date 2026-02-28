/*
 * ZADATAK 48 - 08514018
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514018.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
printf("%d ", 2*j);
}
printf("\n");
}
return 0;
}