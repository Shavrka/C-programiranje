/*
 * ZADATAK 07211123 - 07211123
 * Učitati prirodan broj. Ispisati da li je djeljiv sa 3 i 4 ili nije.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211123.htm
 */

#include <stdio.h>

int main()
{
int a;                     // deklarisanje varijable
printf("Broj: ");
scanf("%d", &a);                                  // ulaz

if (a % 3 == 0 && a % 4 == 0)                     // a djeljivo sa 3  i 4?
printf("Broj %d je djeljiv sa 3 i 4\n", a);   // ispis,djeljiv sa 3 i 4
else                                              // inace
printf("Broj %d nije djeljiv sa 3 i 4\n", a); // ispis, nije djeljiv sa 3 i 4

return 0;
}