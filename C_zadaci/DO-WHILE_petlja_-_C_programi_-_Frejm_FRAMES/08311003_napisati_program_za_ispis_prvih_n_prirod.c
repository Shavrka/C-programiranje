/*
 * ZADATAK 08311003 - 08311003
 * Napisati program za ispis prvih n prirodnih brojeva unazad.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311003.htm
 */

#include <stdio.h>

int main ()
{
int i;
printf("Od broja: ");
scanf("%d", &i);
do
{
printf("%d\n", i);
i--;
}while (i>=1);
return 0;
}