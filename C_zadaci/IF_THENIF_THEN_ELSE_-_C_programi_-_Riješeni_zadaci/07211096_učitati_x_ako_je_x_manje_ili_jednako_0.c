/*
 * ZADATAK 10_1 - 07211096
 * Učitati x. Ako je x manje ili jednako 0, tada je y=5+x, inače je y=x-3.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211096.htm
 */

#include <stdio.h>

int main()
{
int x, y;             // deklarisanje varijabli
printf("Broj: ");
scanf("%d", &x);      // ulaz

if (x <= 0)           // ako je x vece od 0
y = 5 + x;        // izraz1
else                  // inace
y = x - 3;        // izraz2

printf("Broj = %d \n", y); // ispis

return 0;
}