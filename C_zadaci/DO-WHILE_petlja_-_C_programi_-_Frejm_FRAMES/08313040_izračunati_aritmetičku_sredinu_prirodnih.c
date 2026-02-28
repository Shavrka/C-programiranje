/*
 * ZADATAK 08313040 - 08313040
 * Izračunati aritmetičku sredinu prirodnih brojeva od 3 do 8.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313040.htm
 */

#include <stdio.h>

main()
{
int i;
float s,br,as;

s=0;
br=0;
i=3;
do
{
s=s+i;
br=br+1;
i++;
} while(i<=8);
as=s/br;
printf("Aritmeticka sredina od 3 do 8: %.3f",as);
return 0;
}