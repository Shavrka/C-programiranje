/*
 * ZADATAK 07211110 - 07211110
 * Učitati broj i ispitati je li broj cijeli?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211110.htm
 */

#include<stdio.h>
#include <math.h>
int main()
{
float  a;             // deklarisanje varijable
int b;                              // deklarisanje varijable

printf("Broj: ");
scanf("%f",&a);                     // ulaz
b= trunc (a);

if((a - b)  == 0)             // cio broj ?
printf("%d je cio broj",  b);    // cio broj
else                                 // inace
printf("%d nije cio broj",  b); // nije cio broj

return 0;
}