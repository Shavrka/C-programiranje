/*
 * ZADATAK 47 - 08514020
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514020.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++){
for (j = 1; j <= n; j++)   // ispis znaka
if (i >= j)            // ispod i na glavnoj dijagonali?
printf("%d ", j);  // ispis indesa unutrasnje petlje
printf("\n");              // novi red
}
return 0;
}