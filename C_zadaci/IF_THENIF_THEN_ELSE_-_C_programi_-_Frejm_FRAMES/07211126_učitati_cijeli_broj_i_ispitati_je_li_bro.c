/*
 * ZADATAK 07211126 - 07211126
 * Učitati cijeli broj i ispitati je li broj paran i veći od 11?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211126.htm
 */

#include <stdio.h>

int main()
{
int a;                                               // deklarisanje varijable
printf("Broj: ");
scanf("%d", &a);                                     // ulaz

if (a % 2 == 0 && a > 11)                           // a je paran i veci od 11 ?
printf("Broj %d je paran i veci od 11!\n", a);   // ispis paran i veci od 11
else                                                 // inace
printf("Broj %d nije paran ili je manji od 11!\n", a); // ispis, nije paran ili je manji od 11!

return 0;
}