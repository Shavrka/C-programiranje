/*
 * ZADATAK 08311032 - 08311032
 * Ispis kvadratnog korijena prirodnih brojeva do 10.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311032.htm
 */

#include <stdio.h>

int main ()
{
int i=1;
do
{
printf("%f\n", sqrt(i));
i++;
}while (i<=10)
return 0;
}