/*
 * ZADATAK 07211098 - 07211098
 * Učitati prirodan broj. Ispisati da li je djeljiv sa 3 ili nije.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211098.htm
 */

#include <stdio.h>

int main()
{
int a;                     // deklarisanje varijable
printf("Ucitati broj: ");
scanf("%d", &a);                      // ulaz

if(a % 3 == 0)                        // a djeljivo sa 3
printf("%d je djeljivo sa 3", a);   // ispis,djeljiv sa 3
else                                  // inace
printf("%d nije djeljivo sa 3", a); // ispis, nije djeljiv sa 3

return 0;
}