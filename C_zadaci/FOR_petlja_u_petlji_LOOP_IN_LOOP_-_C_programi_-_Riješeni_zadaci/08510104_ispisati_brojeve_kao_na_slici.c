/*
 * ZADATAK 2 - 08510104
 * Ispisati brojeve kao na slici:
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08510104.htm
 */

#include <stdio.h>

int main()
{
int i, j;

for (i = 1; i <= 3; i++)
{
for (j = 1; j <= 3; j++)
{
printf("i=%d j=%d" , i , j);
printf("\n");
}
printf("\n");
}
return 0;
}