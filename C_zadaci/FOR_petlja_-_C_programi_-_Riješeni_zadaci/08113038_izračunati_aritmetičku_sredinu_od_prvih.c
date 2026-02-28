/*
 * ZADATAK 201 - 08113038
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113038.htm
 */

#include <stdio.h>

main()
{
int i,a;
float s,br,as;

printf("Djeljivih sa: ");
scanf("%d",&a);

s=0;
br=0;
for(i=1;i<=5;i++)
{
if(i % a != 0)
{
s=s+i;
br=br+1;
}
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa A od 1 do 5 iznosi: %.3f",as);
return 0;
}