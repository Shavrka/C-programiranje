/*
 * ZADATAK 27 - 08514007
 * Napisati program za ispis dvocifrenih brojeva kao na slici sa dvije petlje (za svaku cifru odvojena petlja):.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514007.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

n = 9;        // broj redova - desetica

for (i = 1; i <= n; i++){        // desetice
for (j = 0; j <= n; j++)     // jedinice
printf("%d%d ", i, j);   // ispis dvocifrenog broja
printf("\n");
}
return 0;
}