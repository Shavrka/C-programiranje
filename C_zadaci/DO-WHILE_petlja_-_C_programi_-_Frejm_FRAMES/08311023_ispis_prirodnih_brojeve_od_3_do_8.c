/*
 * ZADATAK 08311023 - 08311023
 * Ispis prirodnih brojeve od 3 do 8.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311023.htm
 */

#include <stdio.h>

int main ()
{
int i=3;
do
{
printf("%d\n", i);
i++;
}while (i<=8);
return 0;
}