/*
 * ZADATAK 08113025 - 08113025
 * Izračunati aritmetičku sredinu prirodnih brojeva od k do n koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113025.htm
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

for(i=k; i<=n; i++)
{
if(i % 3 == 0)
{
s=s+i;
br=br+1;
}
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa 3 od k do n je: %lf",as);
getchar();
return 0;
}