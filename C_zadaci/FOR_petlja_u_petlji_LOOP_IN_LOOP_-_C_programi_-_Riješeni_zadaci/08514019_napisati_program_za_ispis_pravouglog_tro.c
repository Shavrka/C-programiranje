/*
 * ZADATAK 51 - 08514019
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514019.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 0; i < n; i++){
for (j = 0; j < n; j++)   // ispis znaka
if (i >= j)            // ispod i na glavnoj dijagonali?
printf("%d ", (int)pow(2, j));  // cjelobrojna vrijednost stepena broja
printf("\n");              // novi red
}
return 0;
}