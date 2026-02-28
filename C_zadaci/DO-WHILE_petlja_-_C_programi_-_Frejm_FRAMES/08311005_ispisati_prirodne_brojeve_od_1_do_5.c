/*
 * ZADATAK 08311005 - 08311005
 * Ispisati prirodne brojeve od 1 do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311005.htm
 */

#include <stdio.h>

int main ()
{
int i=1;
do
{
printf("%d\n", i);
i++;
}while (i<=5);
return 0;
}