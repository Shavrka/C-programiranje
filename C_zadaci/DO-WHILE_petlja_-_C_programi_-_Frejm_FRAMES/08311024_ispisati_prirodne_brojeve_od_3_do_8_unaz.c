/*
 * ZADATAK 08311024 - 08311024
 * Ispisati prirodne brojeve od 3 do 8 unazad.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311024.htm
 */

#include <stdio.h>

int main ()
{
int i=8;
do
{
printf("%d\n", i);
i--;
}while (i>=3);
return 0;
}