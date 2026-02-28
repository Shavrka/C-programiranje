/*
 * ZADATAK 42 - 07211024
 * Učitati dva broja. Ako su oba veća od nule ispisati oba veca.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211024.htm
 */

#include <stdio.h>
int main()
{
double a, b, y;               // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &a);             // ulaz a
printf("2. broj: ");
scanf("%lf", &b);             // ulaz b

if ( 0 < a && 0 < b )         // oba veca ?
printf("Oba veca\n");     // ispis
else                          // nisu oba veca od nule
printf("Nisu oba veca od nule\n");    // ispis

return 0;
}