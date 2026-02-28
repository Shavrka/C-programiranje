/*
 * ZADATAK 08311029 - 08311029
 * Ispis prirodnih brojeve od 5 do 20 unazad.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311029.htm
 */

#include <stdio.h>

int main ()
{
int i=20;
do
{
printf("%d\n", i);
i--;
}while (i>=5);
return 0;
}