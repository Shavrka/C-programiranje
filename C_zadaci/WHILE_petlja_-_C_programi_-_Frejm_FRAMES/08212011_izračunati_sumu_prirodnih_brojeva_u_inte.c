/*
 * ZADATAK 08212011 - 08212011
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji su deljivi sa 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212011.htm
 */

#include <stdio.h>

main()
{
int i,n;
double s;

printf("Do broja: ");
scanf("%d",&n);

s=0;
i=1;
while(i<=n)
{
if (i % 7 == 0)	{
s=s+i;
i++;
}
printf("Suma djeljivih sa 7 od 1 do n iznosi: %lf",as);

return 0;
}