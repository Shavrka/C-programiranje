/*
 * ZADATAK 08313017 - 08313017
 * Izračunati aritmetičku sredinu prirodnih brojeva do 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313017.htm
 */

#include <stdio.h>

main()
{
int i;
float s,br,as;

s=0;
br=0;
i=1;
do
{
s=s+i;
br=br+1;
i++;
} while(i<=5);
as=s/br;
printf("Aritmeticka sredina od 1 do 5 iznosi: %.4f",as);
return 0;
}