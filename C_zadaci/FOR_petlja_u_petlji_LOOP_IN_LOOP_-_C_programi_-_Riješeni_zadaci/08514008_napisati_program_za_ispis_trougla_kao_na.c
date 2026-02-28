/*
 * ZADATAK 75 - 08514008
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514008.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i=n; i>=1; i--)
{
for (j = 0; j < i; j++)    // ispis znaka
{
printf("x");
}
printf("\n");              // novi red
}
return 0;
}

II Varijanta
#include <stdio.h>

int main()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

for (i=1; i<=n; i++)
{
for (j=0; j<=n-i; j++)  // ispis znaka
{
printf("x");
}
printf("\n");           // novi red
}
return 0;
}