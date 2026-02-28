/*
 * ZADATAK 71 - 08514041
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514041.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
if (i + j == n + 1)   // sporedna dijagonala?
printf("x");      // na sporednoj dijagonali
else
printf(".");      // izvan sporedne dijagonale
printf("\n");
}
return 0;
}