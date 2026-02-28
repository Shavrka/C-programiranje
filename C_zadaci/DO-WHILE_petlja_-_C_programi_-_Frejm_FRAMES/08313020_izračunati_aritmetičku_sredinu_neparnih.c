/*
 * ZADATAK 08313020 - 08313020
 * Izračunati aritmetičku sredinu neparnih brojeva od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313020.htm
 */

#include <stdio.h>
main()
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
do
{
if(i % 2 != 0)
{
s=s+i;
br=br+1;
}
i++;
} while(i<=n);
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 2 od k do n je: %lf",as);
getchar();
return 0;
}