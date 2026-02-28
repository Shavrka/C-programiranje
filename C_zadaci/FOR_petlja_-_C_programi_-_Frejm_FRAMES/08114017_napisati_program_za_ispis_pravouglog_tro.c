/*
 * ZADATAK 08114017 - 08114017
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08114017.htm
 */

#include <stdio.h>

int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
printf("%d", j);
}
printf("\n");
}
getchar();
}