/*
 * ZADATAK 07211095 - 07211095
 * Učitatii a,b, ako je a veće od b onda je c=2a-b, inače je c=a+2b.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211095.htm
 */

#include <stdio.h>

int main()
{
int a, b, c;          // deklarisanje varijabli
printf("Ucitati 1. broj: ");
scanf("%d", &a);      // ulaz
printf("Ucitati 2. broj: ");
scanf("%d", &b);      // ulaz

if(a > b)             // a vece od b ?
c = 2 * a - b;    // c = 2 * a - b
else                  // a manje od b
c = a + 2 * b;    // c = a + 2 * b

printf("broj je %d \n", c);  // ispis

return 0;
}