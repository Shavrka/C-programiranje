/*
 * ZADATAK 26 - 08514056
 * Napisati program da ispisuje n puta u n redova IME sa razmakom.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514056.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i<= n; i++) {
for (j = 1; j <= n; j++)
printf("IME ");   // ispis teksa sa razmakom iza -
printf("\n");
}
return 0;
}