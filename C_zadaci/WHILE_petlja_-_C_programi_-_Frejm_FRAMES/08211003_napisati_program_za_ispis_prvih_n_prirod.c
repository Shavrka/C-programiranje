/*
 * ZADATAK 08211003 - 08211003
 * Napisati program za ispis prvih n prirodnih brojeva unazad.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211003.htm
 */

#include <stdio.h>

int main ()
{
int i;
printf("Od broja: ");
scanf("%d", &i);
while (i>=1)
{
printf("%d\n", i);
i--;
}
return 0;
}