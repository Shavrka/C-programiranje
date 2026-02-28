/*
 * ZADATAK 25 - 08514001
 * Napisati program da ispisuje 3 puta u 3 reda IME sa razmakom.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514001.htm
 */

#include <stdio.h>

int main()
{
int i, j;

for (i = 1; i <= 3; i++)
{
for (j = 1; j <= 3; j++)
printf("IME ");
printf("\n");
}
return 0;
}