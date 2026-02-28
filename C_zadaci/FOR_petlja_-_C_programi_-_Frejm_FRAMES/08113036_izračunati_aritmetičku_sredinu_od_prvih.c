/*
 * ZADATAK 08113036 - 08113036
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji nisu djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113036.htm
 */

#include <stdio.h>

main()
{
int i;
float s,br,as;

s=0;
br=0;
for(i=1;i<=5;i++)
{
if(i % 3 != 0)
{
s=s+i;
br=br+1;
}
}
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 3 od 1 do 5 iznosi: %.3f",as);

return 0;
}