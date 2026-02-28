/*
 * ZADATAK 08114018 - 08114018
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08114018.htm
 */

#include <stdio.h>

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
getchar();
}