/*
 * ZADATAK 198 - 08113035
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113035.htm
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
if(i % 3 == 0)
{
s=s+i;
br=br+1;
}
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa 3 od 1 do 5 iznosi: %.3f",as);

return 0;
}