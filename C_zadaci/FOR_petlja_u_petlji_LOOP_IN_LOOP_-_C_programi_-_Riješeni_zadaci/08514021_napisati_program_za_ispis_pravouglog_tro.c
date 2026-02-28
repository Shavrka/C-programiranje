/*
 * ZADATAK 54 - 08514021
 * Napisati program za ispis pravouglog trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514021.htm
 */

#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Do broja: ");
scanf("%d",&n);

for (i = 0; i < n; i++)
{
k = i + 1;   // ispis u redu od rednog broja reda
for (j = 0; j < n; j++){   // kolona
if (i >= j)            // ispod i na glavnoj dijagonali?
printf("%d ", k);  // od indeksa kolone
k++;
}
printf("\n");              // novi red
}
return 0;
}

II varijanata
// 08514021
#include <stdio.h>

int main()
{
int i, j, n, k;

printf("Do broja: ");
scanf("%d",&n);

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)    // kolona
if (i >= j)            // ispod i na glavnoj dijagonali?
printf("%d ", i + j + 1);  // ispis
printf("\n");              // novi red
}
return 0;
}