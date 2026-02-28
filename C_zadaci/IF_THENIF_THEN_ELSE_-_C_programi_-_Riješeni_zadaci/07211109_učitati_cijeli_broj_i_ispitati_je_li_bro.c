/*
 * ZADATAK 17_9 - 07211109
 * Učitati cijeli broj i ispitati je li broj neparan i manji od 19?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211109.htm
 */

#include<stdio.h>

int main()
{
printf("Da li je broj neparan i manji od 19\n");

int broj;

printf("Broj: ");
scanf("%d", &broj);

if (broj % 2 != 0 && broj < 19)            // broj neparan i manji od 19?
printf("Broj %d je manji od 19 i neparan", broj);
else
printf("Broj %d ili nije manji od 19 ili je paran", broj);

return 0;
}