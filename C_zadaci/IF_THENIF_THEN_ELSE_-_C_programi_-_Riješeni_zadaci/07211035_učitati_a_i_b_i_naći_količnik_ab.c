/*
 * ZADATAK 26 - 07211035
 * Učitati a i b i naći količnik a/b:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211035.htm
 */

#include <stdio.h>
int main()
{
double a, b, y;                     // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &a);                   // ulaz a
printf("2. broj: ");
scanf("%lf", &b);                   // ulaz b

if(b !=0 ) {                         // nazivnik razlicit od nule
y = a / b;                       // izraz
printf("Rezultat je: %lf", y);  // ispis
} else                              // nazivnik = 0
printf("Nije definisano\n");    // ispis

return 0;
}