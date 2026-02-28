/*
 * ZADATAK 4_02 - 07211164
 * Učitati dva broja. Ispisati prvo veći pa manji broj.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211164.htm
 */

#include <stdio.h>

int main()
{
printf("Ispisi veci pa manji\n");     // naslov
int a, b;

printf("1. broj: ");     // ulaz
scanf("%d", &a);
printf("2. broj: ");
scanf("%d", &b);

if(a > b)           // prvi veci od drugog?
printf("Veci %d \tmanji %d", a, b);  // prvi veci od drugog
else
printf("Veci %d \tmanji %d", b, a);  // drugi veci od prvog
return 0;
}