/*
 * ZADATAK 08213037 - 08213037
 * Izračunati aritmetičku sredinu od prvih 5 prirodnih brojeva koji su djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213037.htm
 */

#include <stdio.h>

int main ()
{
int i,a;
float s,br,as;

printf("Djeljivih sa: ");
scanf("%d",&a);

s=0;
br=0;

i=1;
while(i<=5){
if(i % a == 0) {
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa A od 1 do 5 iznosi: %.3f",as);
return 0;
}