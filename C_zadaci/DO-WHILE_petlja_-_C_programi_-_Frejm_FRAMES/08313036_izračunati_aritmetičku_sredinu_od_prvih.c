/*
 * ZADATAK 08313036 - 08313036
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji nisu djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313036.htm
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
if(i % 3 != 0)
{
s=s+i;
br=br+1;
}
i++;
} while(i<=5);
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 3 od 1 do 5 iznosi: %.3f",as);

return 0;
}