/*
 * ZADATAK 08213017 - 08213017
 * Izračunati aritmetičku sredinu prirodnih brojeva do 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213017.htm
 */

#include <stdio.h>

int main ()
{
int i;
float s,br,as;

s=0;
br=0;
i=1;
while(i<=5)
{
s=s+i;
br=br+1;
i++;
}
as=s/br;
printf("Aritmeticka sredina od 1 do 5 iznosi: %.4f",as);
return 0;
}