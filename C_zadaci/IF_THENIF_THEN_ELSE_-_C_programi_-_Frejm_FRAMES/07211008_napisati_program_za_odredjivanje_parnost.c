/*
 * ZADATAK 07211008 - 07211008
 * Napisati program za odredjivanje parnosti broja.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211008.htm
 */

#include <stdio.h>

int main ()
{
int x;                              // deklarisanje varijable
printf("Broj: ");
scanf("%d", &x);
if (x%2 == 0)                       // broj paran ?
printf("Broj je paran! \n");    // ispis
else                                // broj noje paran
printf("Broj nije paran! \n");  // izracunaj

return 0;
}