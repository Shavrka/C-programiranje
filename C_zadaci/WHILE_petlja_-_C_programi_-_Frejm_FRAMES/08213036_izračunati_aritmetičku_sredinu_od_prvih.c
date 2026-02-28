/*
 * ZADATAK 08213036 - 08213036
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji nisu djeljivi sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213036.htm
 */

#include <stdio.h>

main()
{
int i;
float s,br,as;

s=0;
br=0;
i=1;
while(i<=5)
{
if(i % 3 != 0)
{
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 3 od 1 do 5 iznosi: %.3f",as);

return 0;
}