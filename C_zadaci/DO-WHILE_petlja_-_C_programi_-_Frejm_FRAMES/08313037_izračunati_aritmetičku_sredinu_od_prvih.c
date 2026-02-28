/*
 * ZADATAK 08313037 - 08313037
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji su djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313037.htm
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

i=1;
do
{
if(i % a == 0)
{
s=s+i;
br=br+1;
}
i++;
} while(i<=5);
as=s/br;
printf("Aritmeticka sredina djeljivih sa A od 1 do 5 iznosi: %.3f",as);
return 0;
}