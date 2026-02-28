/*
 * ZADATAK 29 - 08514057
 * Napisati program da ne ispisuje ime u prvom redu. Dva imena u drugom, a zatim u svakom narednom po jedno ime više. Broj redova učitati sa tastature.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514057.htm
 */

#include <stdio.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);

for (i = 1; i<= n; i++) {
for (j = 1; j <= n; j++)
if (j <= i)          // ispod i glavna dijagonala j <= i
printf("IME ");  // ispis
printf("\n");
}
return 0;
}