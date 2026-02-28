/*
 * ZADATAK 08213020 - 08213020
 * Izračunati aritmetičku sredinu neparnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213020.htm
 */

#include <stdio.h>

int main ()
{
int i,n,k;
double s,br,as;

printf("Od broja: ");
scanf("%d",&k);

printf("Do broja: ");
scanf("%d",&n);

s=0;
br=0;

i=k;
while( i<=n) {
if(i % 2 != 0) {
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 2 od k do n je: %lf",as);
getchar();
return 0;
}