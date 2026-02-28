/*
 * ZADATAK 65 - 08514066
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514066.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Broj redova: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
if (j >= i)             // iznad glavne dijagonale?
printf("%d ", j);  // indeks kolone sa razmakom na i iznad glavne dijagonale
else
printf("  ");      // ispod glavne dijagonale prazan prostor
printf("\n");
}
return 0;
}