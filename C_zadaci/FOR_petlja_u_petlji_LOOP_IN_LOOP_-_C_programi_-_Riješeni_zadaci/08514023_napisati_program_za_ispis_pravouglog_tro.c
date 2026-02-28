/*
 * ZADATAK 50 - 08514023
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514023.htm
 */

#include <stdio.h>

int main()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++){
k = i;                     // brojac unutar reda
for (j = 1; j <= n; j++){   // ispis znaka
if (i >= j)             // ispod i na glavnoj dijagonali?
printf("%d ", 5 * k);  // pomnozi sa 5
k = k + 1;              // slijedeci ispis
}
printf("\n");              // novi red
}
return 0;
}