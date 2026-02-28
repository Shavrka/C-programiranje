/*
 * ZADATAK 39 - 08111025
 * Ispis prirodnih brojeva od 1 do n koji su djeljivi sa 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111025.htm
 */

#include <stdio.h>

int main ()
{
int i, n;
printf("Do broja: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)    // petlja od 1 do n
if(i %5 == 0)           // djeljiv sa 5?
printf("%d\n", i);  // ispis
return 0;
}