/*
 * ZADATAK 28 - 08514002
 * Napisati program da ispisuje u prvom redu jedno ime a zatim u svakom narednom po jedno ime više.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514002.htm
 */

#include <stdio.h>

int main()
{
int i, j;

for (i = 1; i<= 3; i++)
{
for (j = 1; j <= i; j++)
{
printf("IME ");
}
printf("\n");
}
return 0;
}