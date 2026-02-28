/*
 * ZADATAK 08113040 - 08113040
 * Izračunati aritmetičku sredinu prirodnih brojeva od 3 do 8.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113040.htm
 */

#include <stdio.h>

main()
{
int i;
float s,br,as;

s=0;
br=0;
for(i=3;i<=8;i++)
{
s=s+i;
br=br+1;
}
as=s/br;
printf("Aritmeticka sredina od 3 do 8: %.3f",as);
return 0;
}