/*
 * ZADATAK 08213040 - 08213040
 * Izračunati aritmetičku sredinu prirodnih brojeva od 3 do 8.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213040.htm
 */

#include <stdio.h>

main()
{
int i;
float s,br,as;

s=0;
br=0;
i=3;
while(i<=8)
{
s=s+i;
br=br+1;
i++;
}
as=s/br;
printf("Aritmeticka sredina od 3 do 8: %.3f",as);
return 0;
}