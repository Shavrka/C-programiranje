/*
 * ZADATAK 17_2 - 07211122
 * Učitati prirodan broj. Ispisati da li je djeljiv sa 5 ili nije.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211122.htm
 */

#include <stdio.h>

int main()
{
int a;                                        // deklarisanje varijable
printf("Broj: ");
scanf("%d", &a);                              // ulaz

if (a % 5 == 0)                               // a djeljivo sa 5?
printf("Broj %d je djeljiv sa 5\n", a);   // ispis,djeljiv sa 5
else                                          // inace
printf("Broj %d nije djeljiv sa 5\n", a); // ispis, nije djeljiv sa 5

return 0;
}