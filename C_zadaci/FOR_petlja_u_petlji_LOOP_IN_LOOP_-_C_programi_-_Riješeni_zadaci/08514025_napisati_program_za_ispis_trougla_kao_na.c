/*
 * ZADATAK 77 - 08514025
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514025.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)    // ispis znaka
if (i + j <= n + 1)    // iznad sporedne dijagonale?
if (j == 1)           // prva kolona?
printf("x ");     // prva kolona
else
printf("3 x ");   // ostale kolone
printf("\n");              // novi red
}
return 0;
}