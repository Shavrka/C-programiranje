/*
 * ZADATAK 246 - 08114015
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08114015.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 0; j < i; j++)
{
if (j == 0)
printf("x ");
else
printf("I x ");
}
printf("\n");
}
getchar();
}